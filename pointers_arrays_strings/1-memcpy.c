#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_memcpy - check the code
 *
 *@src: dfdxcesfsqfqre
 *
 *@dest: lkfkrfk
 *
 *@n: hcgyucdh
 *
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}
