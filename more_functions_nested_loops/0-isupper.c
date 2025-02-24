#include "main.h"
#include <unistd.h>
#include <ctype.h>

/**
 * _isupper - Prints the alphabet in lowercase and then in uppercase.
 *
 * @c: int
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
