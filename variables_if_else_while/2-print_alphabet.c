#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
putchar(tolower(x));
putchar('\n');
return (0);
}
