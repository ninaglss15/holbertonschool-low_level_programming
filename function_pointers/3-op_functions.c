#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Prints a name
 * @size: the person
 * @array: A pointer to a function
 * @action: pointer to a int
 *
 * Return: Nothing
 */

int op_add(int a, int b)
{
	return (a + b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a * b)
}

int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	(exit(100));
	}
	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}

