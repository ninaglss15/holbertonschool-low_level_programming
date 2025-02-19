#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int num;

	for (num = 'a'; num <= 'z'; num++)
	_putchar(num);
	_putchar('\n');
}
