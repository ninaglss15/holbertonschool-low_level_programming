#include <string.h>
#include <stdlib.h>
/**
 * *malloc_checked - check the code
 *
 *@b: lkfkrrrffk
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
