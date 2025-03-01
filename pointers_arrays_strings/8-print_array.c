#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_array - check the code
 *
 *@a: dfdxcesfsqfqre
 *
 *@n: kdfknrjfk
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	if (i == n - 1)
	printf("%d", a[i]);

	else

	printf("%d, ", a[i]);
	printf("\n");
}
