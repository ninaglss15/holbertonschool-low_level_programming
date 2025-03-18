#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - check if a number is equal to 98
 * @argc: the integer to check
 * @argv: functions
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
	printf("Error\n");
	exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
