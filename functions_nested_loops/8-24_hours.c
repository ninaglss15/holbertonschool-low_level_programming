#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Imprime toutes les minutes de 00:00 à 23:59.
 *
 */
void jack_bauer(void)
{
	int min;
	int hour;

	for (hour = 0; hour < 24; hour++)
	{

	for (min = 0; min < 60; min++)
	{

		putchar('0' + (hour / 10));
		putchar('0' + (hour % 10));
		putchar(':');
		putchar('0' + (min / 10));
		putchar('0' + (min % 10));
			putchar('\n');
		}
	}
}

