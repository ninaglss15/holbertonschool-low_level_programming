#include <stdio.h>
/**
 * main - prinf see all types octes (char etc)
 * return 0
 */
int main(void)
{
	printf("the size of a %d byte(s) \n", (int) sizeof(char));
	printf("the size of a %d byte(s) \n", (int) sizeof(int));
	printf("the size of a %d byte(s) \n", (int) sizeof(float));
	printf("the size of a %d byte(s) \n", (int) sizeof(long int));
	printf("the size of a %d byte(s) \n", (int) sizeof(long long));

	return (0);
}
