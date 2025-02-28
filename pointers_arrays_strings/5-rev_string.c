#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - check the code
 *
 *@s: dfdxcesfsqfqre
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char tmp;
	int end = 0;
	int start = 0;

	while (s[end] != '\0')
	end++;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}
}
