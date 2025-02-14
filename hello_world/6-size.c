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

	printf("the size of a char: %d byte(s) \n", (int) sizeof(p));
	printf("the size of a int: %d byte(s) \n", (int) sizeof(u));
	printf("the size of a long: %d byte(s) \n", (int) sizeof(c));
	printf("the size of a float: %d byte(s) \n", (int) sizeof(e));
	printf("the size of a long long: %d byte(s) \n", (int) sizeof(s));

	return (0);
}
