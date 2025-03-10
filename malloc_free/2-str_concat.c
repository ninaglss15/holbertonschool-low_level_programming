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
	int c2 = 0;
	char *p;

	if (s1 == 0)
	s1 = "";

	if (s2 == 0)
	s2 = "";

	while (s1[c1])
	c1++;

	while (s2[c2])
	c2++;

	i = c1 + c2;
	p = malloc((sizeof(char) * i) + 1);
	if (p == NULL)
	return (NULL);


	while (o < i)
	{

	if (o <= c1)
	p[o] = s1[o];

	if (o >= i)
	{
	p[o] = s2[c2];
	c2++;
	}
	o++;
	}
	p[o] = '\0';
	return (p);
}
