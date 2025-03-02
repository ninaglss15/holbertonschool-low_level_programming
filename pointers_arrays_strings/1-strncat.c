#include <stdio.h>
#include "main.h"
/**
 * *_strncat - check the code
 *
 *@src: dfdxcesfsqfqre
 *
 *@dest: eee
 *
 *@n: frjk
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
