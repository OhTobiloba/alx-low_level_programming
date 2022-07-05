#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: number to check
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');
	return (n);
}
