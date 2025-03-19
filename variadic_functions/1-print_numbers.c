#include<stdarg.h>
#include<stdio.h>
/**
* print_numbers - Prints a name
* @n: variable
* @separator: pointeurs
* Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	va_start(args, n);

	if (n == 0)
    {
	printf("\n");
	return;
    }
    
	if (separator == NULL)
	return;

	for (i = 0; i < n; i++)
	printf("%d", va_arg(args, int));


	printf("%d", n);

	if (separator != NULL && i < n - 1)
	printf("%s", separator);

	va_end(args);

	printf("\n");


}
