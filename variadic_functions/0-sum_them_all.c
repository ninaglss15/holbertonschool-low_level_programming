#include<stdarg.h>
#include<stdio.h>
/**
* sum_them_all - Prints a name
* @n: variable
* Return: Nothing
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;

	int sum;

	va_list args;

	va_start(args, n);


	if (n == 0)
	return (0);

	for (i = 0; i < n; i++)
	sum += va_arg(args, int);

	va_end(args);

	return (sum);

}
