#include "function_pointers.h"
/**
* print_name - Prints a name using the function passed as a pointer
* @name: The name of the person
* @f: A pointer to a function that takes a char pointer as argument
*
* Return: Nothing
*/
	void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
