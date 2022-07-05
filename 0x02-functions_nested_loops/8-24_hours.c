#include "main.h"

/**
 * jack bauer - prints every minute of the day of jack bauer
 *
 * Return: minutes
 */

void jack_bauer(void)
{
	int hour, minute;

	hour = 0;
	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
		}
		hour++
	}
}
