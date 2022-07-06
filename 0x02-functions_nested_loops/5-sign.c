#include "main.h"

/**
 * print_sign - prints the sign of a number
 * 
 * @c: number to check
 *
 * Return: +1 if is positive, 0 if is 0 and -1 if is negative
 */

int print_sign(int c)
{
        if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
