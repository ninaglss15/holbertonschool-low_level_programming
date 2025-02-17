#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
int letter;
for (letter = 'z'; letter <= 'a'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
