#include "main.h"
#include <unistd.h>
#include <ctype.h>

/**
 * print_sign - Prints the alphabet in lowercase and then in uppercase.
 *
 * @c: int
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
		return (0);
	}
	else
	{
	_putchar('-');
		return (-1);
	}
}
