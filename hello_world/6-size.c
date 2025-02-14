#include <stdio.h>
/**
 * main - prinf see all types octes (char etc)
 * return 0
 */
int main(void)
{
	printf("%d\n", (int) sizeof(char));
	printf("%d\n", (int) sizeof(int));
	printf("%d\n", (int) sizeof(long));
	printf("%d\n", (int) sizeof(float));
	printf("%d\n", (int) sizeof(double));
	printf("%d\n", (int) sizeof(void));

	return (0);
}
