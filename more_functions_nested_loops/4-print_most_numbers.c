#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
int num;

for (num = '0'; num <= '9'; num++)
if (num != '2' && num != '4')
_putchar(num);
_putchar('\n');
}
