#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
* create_file - Creates a file and writes text content to it
* @filename: Name of the file to create
* @text_content: NULL-terminated string to write to the file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	int nletters;

	int rwr;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	return (1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}


	while (text_content[nletters] != '\0')
	nletters++;

	rwr = write(fd, text_content, nletters);
	if (rwr != nletters || rwr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
