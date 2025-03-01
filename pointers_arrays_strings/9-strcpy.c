#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - check the code
 *
 *@src: dfdxcesfsqfqre
 *
 *@dest: lkfkrfk
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

