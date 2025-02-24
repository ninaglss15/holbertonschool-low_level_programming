#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_numbers - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	_putchar(num);
	_putchar('\n');
}
