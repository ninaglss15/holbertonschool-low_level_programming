#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcmp - check the code
 *
 *@s1: dfdxcesfsqfqre
 *
 *@s2: ironon
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{

	for (; *s1 && *s2 && (*s1 == *s2); s1++, s2++)
	{
	}
	return (*s1 - *s2);
}

