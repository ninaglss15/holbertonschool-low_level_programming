#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - check the code
 *
 *@s: dfdxcesfsqfqre
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
