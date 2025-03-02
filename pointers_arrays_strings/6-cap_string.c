#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *cap_string - check the code
 *
 *@str: dfdxcesfsqfqre
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
	if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
	str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' ||
	str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
	str[i - 1] == '{' || str[i - 1] == '}')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
	}
	i++;
	}

	return str;
}
