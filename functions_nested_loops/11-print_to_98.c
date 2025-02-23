#include <stdio.h>

/**
 * print_to_98 - check the code
 *
 * Return: Always 0.
 *
 *@n: djkggedvheb
 */

void print_to_98(int n)
{
	while (n != 98)
	{
	printf("%d, ", n);

	if (n < 98)
	n++;
	else
	n--;
	}

	printf("98\n");
}
