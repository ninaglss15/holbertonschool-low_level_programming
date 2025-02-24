#include "main.h"
#include <unistd.h>
#include <ctype.h>

/**
 * _isdigit - Prints the alphabet in lowercase and then in uppercase.
 *
 * @c: int
 *
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
