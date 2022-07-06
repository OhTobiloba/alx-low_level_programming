#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: value of tables
 */

void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			result = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if ((result < 10) && (b != 0))
			{
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
			else
				_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
