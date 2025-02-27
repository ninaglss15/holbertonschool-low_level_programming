#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _puts - check the code
 *
 *@str: dfdxcesfsqfqre
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
