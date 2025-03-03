#include <stdio.h>
/**
 * print_diagsums - check the code
 *
 *@size: dfdxcesfsqfqre
 *
 *@a: lkfkrfk
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	sum1 += *(a + (i * size) + i);
	sum2 += *(a + (i * size) + (size - 1 - i));

	printf("Sum of the first diagonal: %d\n", sum1);
	printf("Sum of the second diagonal: %d\n", sum2);
}
