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
void puts2(char *str)
{
	for (; *str != '\0'; str+= 2)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
