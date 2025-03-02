#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_strncpy - check the code
 *
 *@src: dfdxcesfsqfqre
 *
 *@dest: lkfkrfk
 *
 *@n: jbrfjb
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
