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
	int c1 = 0;
	unsigned int c2 = 0;
	char *p;

	if (s1 == 0)
	s1 = "";
	if (s2 == 0)
	s2 = "";

	while (s1[c1])
	c1++;

	while (s2[c2])
	c2++;

	if (n >= c2)
	n = c2;

	p = malloc(c1 + n + 1);

	if (p == NULL)
	return (NULL);

	strcpy(p, s1);

	strncat(p, s2, n);

	p[c1 + n] = '\0';
	return (p);
}
