#include <stdio.h>
/**
 * main - printf
 * return0
 */
int main(void)
{
	int p;
	char u;
	long int c;
	float e;
	long long s;

	printf("Size of a int: %d byte(s)\n", (int) sizeof(p));
	printf("Size of a char: %d byte(s)\n", (int) sizeof(u));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(c));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(e));
	printf("Size of a long long: %d byte(s)\n", (int) sizeof(s));

	return (0);
}
