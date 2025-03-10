#include <stdlib.h>
/**
 * *create_array - check the code
 *
 *@c: dfdxcesfsqfqre
 *
 *@size: lkfkrfk
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *m = NULL;
	unsigned int i;

	if (size == 0)
	return (NULL);

	m = (char *)malloc(size * sizeof(char));

	if (m == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	m[i] = c;

	return (m);
}
