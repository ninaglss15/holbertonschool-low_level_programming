#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * reverse_array - check the code
 *
 *@a: dfdxcesfsqfqre
 *
 *@n: rjrbcj
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
	temp = a[start];
	a[start] = a[end];
	a[end] = temp;
	start++;
	end--;
	}
}

