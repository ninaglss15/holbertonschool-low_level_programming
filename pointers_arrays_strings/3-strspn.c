#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strspn - check the code
 *
 *@s: dfdxcesfsqfqre
 *
 *@accept: lkfkrfk
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i, j;

	for (; *s; s++)
	{
	for (i = 0; accept[i]; i++)
	{
	if (accept[i] == *s)
	{
	bytes++;
	break;
	}
	else if (accept[i + 1] == '\0')
	return (bytes);
	}
	}
	return (bytes);
}




