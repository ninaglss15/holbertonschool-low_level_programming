#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - check the code
 *
 *@str: dfdxcesfsqfqre
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;

	for (i = 5; str[i] != '\0'; i++)
	{

	_putchar(str[i]);

	}
	_putchar('\n');
}
