#include <stdlib.h>
/**
 * *str_concat - check the code
 *
 *@s1: dfdxcesfsqfqre
 *
 *@s2: lkfkrfk
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int o = 0;
	int c1 = 0;
	int k;
	int c2 = 0;
	char *p = NULL;

	if (s1 == 0)
	s1 = "";

	if (s2 == 0)
	s2 = "";

	for (c1 = 0; s1[c1] != '\0'; c1++)

	for (c2 = 0; s2[c2] != '\0'; c2++)

	p = malloc((i + o + 1) * sizeof(char));
	if (p == NULL)
	return NULL;


	for (i = 0; i < c1; i++)
	p[i] = s1[i];

	for (o = 0; o < c2; o++)
	p[c1 + o] = s2[o];

	for (k = c1 + c2; k < c1 + c2 + 1; k++)
	p[k] = '\0';
	return (p);
}
