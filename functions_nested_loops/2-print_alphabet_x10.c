#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int num;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (num = 'a'; num <= 'z'; num++)
		{
		_putchar(num);

		}
		_putchar('\n');
	}
}
