#include <stdlib.h>
/**
 * *array_range - check the code
 *
 *@min: dfdxcesfsqfqre
 *
 *@max: lkfkrfk
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = min + i;

	return (array);
}
