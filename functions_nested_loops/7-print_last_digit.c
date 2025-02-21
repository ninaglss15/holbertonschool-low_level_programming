#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - Prints the alphabet in lowercase and then in uppercase.
 *
 *@malouloute: dfhdkjhckeuyg
 *
 * Return: 0
 */

int print_last_digit(int malouloute)
{
	int cc;

	cc = malouloute % 10;

	if (cc < 0)
	{
		cc = cc * -1;
	}
	_putchar(cc + '0');
	return (cc);
}

