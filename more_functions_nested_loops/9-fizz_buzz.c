   #include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_square - dlkdubckjdbnjfb
 *
 * Return: Always 0.
 *
 *@size: frjfnuhuyguigujkns
 */
int main(void)
{

int n;

for (n = 1 ; n <= 100; n++)

if ((n % 3 == 0) && (n % 5 == 0))
{
printf("FizzBuzz");
}
else if (n % 3 == 0)
{
printf("fizz");
}
else if (n % 5 	== 0)
{
printf("buzz");
}
else
{
printf("%d", n);
}
if (n != 100)
{
printf(" ");
}
printf("\n");
return(0);
}
