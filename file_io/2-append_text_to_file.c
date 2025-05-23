#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
* append_text_to_file - Appends text to the end of a file
* @filename: Name of the file
* @text_content: NULL-terminated string to append
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	int nletters;

	int rwr;

	if (!filename)
	return (-1);

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	return (-1);

	if (text_content)
	{
	for (nletters = 0; text_content[nletters]; nletters++)
	rwr = write(fd, text_content, nletters);
	if (rwr == -1)
	return (-1);
	}
	close(fd);
	return (1);
}
