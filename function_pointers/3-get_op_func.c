#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - check if a number is equal to 98
 *
 *@s: pointer
 * Return: 0 if false, something else otherwise.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] =

{
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

	int i = 0;

	while (ops[i].op != NULL)
	{

	if (*s == *(ops[i].op) && s[1] == 0)
	return (ops[i].f);
	i++;
	}

	return (NULL);
}
