#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Prints a name
 * @size: the person
 * @array: A pointer to a function
 * @action: ecececec
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	return;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	action(array[i]);
	}
}
