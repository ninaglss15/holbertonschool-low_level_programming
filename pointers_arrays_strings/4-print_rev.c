#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - check the code
 *
 *@s: dfdxcesfsqfqre
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	for (; *s != '\0'; s++)
	print_rev(s);
}
