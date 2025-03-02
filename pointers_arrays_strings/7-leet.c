#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - check the code
 *
 *@str: dfdxcesfsqfqre
 *
 * Return: Always 0.
 */
char *leet(char *n)
{
	int i;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int j;

	for (i = 0; n[i] != '\0'; i++)
	{
	for (j = 0; s1[j] != '\0'; j++)
	{
	if (n[i] == s1[j])
	{
	n[i] = s2[j];
	break;
	}
	}
	}
	return n;
}

