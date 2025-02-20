#include "main.h"
#include <unistd.h>
#include <ctype.h>

/**
 * print_sign - Prints the alphabet in lowercase and then in uppercase.
 *
 * @c: int
 *
 * Return: 0
 */

int print_sign(int n)
{
	if (n <= '-')
		return (-1);

	else if (n >= '+')
		return (1);

	else
		return (0);
}
