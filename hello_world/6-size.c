#include <stdio.h>
/**
 * main - prinf see all types octes (char etc)
 * return 
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %d byte(s)\n", (int) sizeof(a));
	printf("size of a int: %d byte(s)\n", (int) sizeof(b));
	printf("size of a long int: %d byte(s)\n", (int) sizeof(c));
	printf("size of a lolng lolng int: %d byte(s)\n", (int) sizeof(d));
	printf("size of a float: %d byte(s)\n", (int) sizeof(f));

	return (0);
}
