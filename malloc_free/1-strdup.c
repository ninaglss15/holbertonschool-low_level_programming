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
	int i;

	if (str == 0)
	return (NULL);

	p = (char *)malloc((strlen(str) + 1) * sizeof(char));

	if (str == 0)
	return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	p[i] = str[i];

	return (p);
}
