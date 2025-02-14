#include <stdio.h>
/**
 * main - prinf see all types octes (char etc)
 * return 0
 */
int main(void)
{
	char p;
	int u;
	long c;
	float e;
	long long s;

	printf("the size of a char: %d\n", (int) sizeof(p));
	printf("the size of a int: %d\n", (int) sizeof(u));
	printf("the size of a long: %d\n", (int) sizeof(c));
	printf("the size of a float: %d\n", (int) sizeof(e));
	printf("the size of a long long: %d\n", (int) sizeof(s));

	return (0);
}
