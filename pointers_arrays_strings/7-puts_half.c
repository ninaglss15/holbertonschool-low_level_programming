#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - check the code
 *
 *@str: dfdxcesfsqfqre
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int a, n, l;

	l = 0;

	for (a = 0; str[a] != '\0'; a++)
		l++;

	n = (l / 2);

	if ((l % 2) == 1)
		n = ((l + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
