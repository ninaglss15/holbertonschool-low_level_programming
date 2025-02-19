#include "main.h"
#include <unistd.h>
#include <ctype.h>

/**
 * _islower - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}

