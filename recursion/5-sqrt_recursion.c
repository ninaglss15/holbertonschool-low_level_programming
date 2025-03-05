#include <stdio.h>
#include "main.h"
/**
 * checker - check the code
 *
 *@n: dfdxcesfsqfqre
 *
 *@base: iejciu
 *
 * Return: Always 0.
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}
/**
 * _sqrt_recursion - check the code
 *
 *@n: dfdxcesfsqfqre
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
