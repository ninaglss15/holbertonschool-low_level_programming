#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* read_textfile - Lit un fichier texte et en affiche le contenu
* @filename: Nom du fichier à lire
* @letters: Nombre de lettres (caractères) à lire et à afficher
*
* Return: Le nombre de lettres réellement lues et affichées.
*         Retourne 0 si le fichier ne peut pas être ouvert, lu,
*         ou si malloc échoue.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	char *buffer;

	ssize_t nrd, nwr;

	if (*filename == '\0')
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	return (0);

	nrd = read(fd, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(fd);
	free(buffer);

	return (nwr);

}
