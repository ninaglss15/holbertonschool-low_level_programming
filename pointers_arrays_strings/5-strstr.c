#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_strstr - check the code
 *
 *@haystack: dfdxcesfsqfqre
 *
 *@needle: lkfkrfk
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (needle[0] == '\0')
	{
	return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
	if (haystack[i] == needle[0])
	{
	for (j = 1; needle[j] != '\0'; j++)
	{
	if (haystack[i + j] != needle[j])
	{
	break;
	}
	}
	if (needle[j] == '\0')
	{
	return (&haystack[i]);
	}
	}
	}
	return (NULL);
}
