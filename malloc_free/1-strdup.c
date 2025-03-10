#include <string.h>
#include <stdlib.h>
/**
 * *_strdup - check the code
 *
 *@str: lkfkrrrffk
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *p = NULL;
	int i = 1;
	int a = 0;

	if (str == 0)
	return (NULL);

	while (str[i])
	i++;

	p = malloc((sizeof(char) * i) + 1);
	if (p == NULL)
	return (NULL);

	while (a < i)
	{
	p[a] = str[a];
	a++;
	}

	p[a] = '\0';
	return (p);
}
