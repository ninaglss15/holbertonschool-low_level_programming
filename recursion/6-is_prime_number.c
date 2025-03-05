#include <stdio.h>
#include "main.h"
int _is_prime_helper(int n, int div);
/**
 * is_prime_number - check the code
 *
 *@n: iejciu
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (_is_prime_helper(n, 2));
}
/**
 * _is_prime_helper - check the code
 *
 *@div: dfdxcesfsqfqre
 *
 *@n: iejciu
 *
 * Return: Always 0.
 */
int _is_prime_helper(int n, int div)
{
	if (div * div > n)
	return (1);
	if (n % div == 0)
	return (0);
	return (_is_prime_helper(n, div + 1));
}
