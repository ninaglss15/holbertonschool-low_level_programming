#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: the person
 * @f: A pointer to a function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}

