#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * more_numbers - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int num;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (num = 0; num <= 14; num++)
		{
		_putchar(num +'0');

		}
	_putchar('\n');
	}
}
