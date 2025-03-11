#include <string.h>
#include <stdlib.h>
/**
 * *string_nconcat - check the code
 *
 *@s1: dfdxcesfsqfqre
 *
 *@s2: lkfkrfk
 *
 *@n: kenc
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;
	unsigned int l;
	char *nconcat;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[i] != '\0')
	i++;

	while (s2[j] != '\0')
	j++;

	if (n >= j)
	n= j;
	nconcat = malloc(i + n + 1);

	if (nconcat == NULL)
	return (NULL);

	for (k = 0; k < i; k++)
	nconcat[k] = s1[k];

	for(l = 0; l < n; l++)
	nconcat[i + l] = s2[l];

	nconcat[i + n] = '\0';

	return (nconcat);
}
