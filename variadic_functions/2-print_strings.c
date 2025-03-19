#include<stdarg.h>
#include<stdio.h>
/**
* print_strings - Prints a name
* @n: variable
* @separator: pointeurs
* Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	char *str;

	unsigned int i;

	va_start(args, n);

	if (n == 0)
	{
	printf("\n");
	va_end(args);
	return;
	}

	for (i = 0; i < n; i++)
	{

	str = va_arg(args, char *);

	if (str == NULL)
	printf("nil");
	else
	printf("%s", str);

	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	}

	va_end(args);
	printf("\n");

}
