#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
/**
 * *_calloc - check the code
 *
 *@size: dfdxcesfsqfqre
 *
 *@nmemb: lkfkrfk
 *
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *p;

	if (nmemb == 0 || size == 0)
	return (NULL);

	if (nmemb > SIZE_MAX / size)
	return (NULL);

	total_size = nmemb * size;

	p = malloc(total_size);
	if (p == NULL)
	return (NULL);


	memset(p, 0, total_size);

	return (p);
}
