#include <stdlib.h>
/**
 * *_strcpy - check the code
 *
 *@src: dfdxcesfsqfqre
 *
 *@dest: lkfkrfk
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *m = NULL;
	int unsigned i;

	if (size == 0)
	return (NULL);

	m = (char *)malloc(size*sizeof(char));

	if (m == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	m[i] = c;

	return (m);
}
