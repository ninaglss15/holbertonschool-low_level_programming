#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_strchr - check the code
 *
 *@s: dfdxcesfsqfqre
 *
 *@c: hcgyucdh
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)

	if (s[i] == c)
	{
		return (s + i);
	}

	return (NULL);

}
