#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - check the code
 *
 *@s: dfdxcesfsqfqre
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	for (s -= 1; i >= 0; i--)
	_putchar(s[i]);

	_putchar('\n');
}
