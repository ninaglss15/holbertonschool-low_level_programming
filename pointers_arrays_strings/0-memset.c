#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *memset - check the code
 *
 *@s: dfdxcesfsqfqre
 *
 *@b: lkfkrfk
 *
 *@n: jceij
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for ( i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
