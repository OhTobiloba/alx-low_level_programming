#include "main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 * followed by a new line
 * @n: An input integer
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
