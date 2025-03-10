#include <stdlib.h>
/**
 * **alloc_grid - check the code
 *
 *@width: dfdxcesfsqfqre
 *
 *@height: lkfkrfk
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int i = 0, o = 0, a = 0, n = 0;
	int **p;

	if (width <= 0)
	return (NULL);

	if (height <= 0)
	return (NULL);

	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < height; i++)
	p[i] = malloc(sizeof(int) * width);

	if (p[i] == NULL)
		for (o = i; o >= 0; o--)
		{
		free(p[o]);
		}

	free(p);
	return (NULL);
	for (n = 0; n < height; n++)
	{
		for (a = 0; a < width; a++)
		{
			p[n][a] = 0;
		}
	}
	return (p);
}
