#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_chessboard - check the code
 *
 *@a: dfdxcesfsqfqre
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int c;
	int l;

	for (c = 0; c < 8; c++)
	{
	for (l = 0; l < 8; l++)
	_putchar(a[c][l]);
	_putchar('\n');
	}
}
