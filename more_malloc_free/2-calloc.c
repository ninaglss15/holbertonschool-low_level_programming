#include <string.h>
#include <stdint.h>
#include <stdlib.h>
/**
 * *malloc_checked - check the code
 *
 *@b: lkfkrrrffk
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i = 0;
	unsigned int o = 0;

	if (nmemb == 0)
	return (NULL);
	if (size == 0)
	return (NULL);

	if (nmemb > SIZE_MAX / size)
    	return NULL;

	o = nmemb * size;
	p = malloc(o);

	if (p == NULL)
	return (NULL);

	while (i < o)
	{
	p[i] = 0;
	i++;
	}
	return (p);
}
