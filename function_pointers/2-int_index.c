#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Prints a name
 * @size: the person
 * @array: A pointer to a function
 * @cmp: pointer to a int
 *
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	return (-1);

	if (size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	return (i);
	}
	return (-1);
}
