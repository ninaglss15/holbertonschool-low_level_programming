#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 1024

/**
 * safe_close - Ferme un descripteur de fichier en gérant les erreurs
 * @fd: descripteur de fichier à fermer
 */
void safe_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copie le contenu d’un fichier vers un autre
 * @argc: nombre d’arguments
 * @argv: tableau d’arguments
 * Return: 0 si succès, codes 97 à 100 sinon
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	ssize_t read_count, write_count;
	char temp_buffer[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest_fd < 0)
	{
		safe_close(source_fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((read_count = read(source_fd, temp_buffer, BUFSIZE)) > 0)
	{
		write_count = write(dest_fd, temp_buffer, read_count);
		if (write_count != read_count)
		{
			safe_close(source_fd);
			safe_close(dest_fd);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (read_count == -1)
	{
		safe_close(source_fd);
		safe_close(dest_fd);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	safe_close(source_fd);
	safe_close(dest_fd);

	return (0);
}
