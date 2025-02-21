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

		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar(10);
		}
	}
}

