#include <stdio.h>
#include "main.h"

/**
 * main - print the first 50 fibonacci numbers starting with 1 or 2
 *
 * Return: Numbers
 */

int main(void)
{
	int counter;
	unsigned long first_number, second_number, result;

	first_number = 0;
	second_number = 1;

	for (counter = 1; counter <= 49; counter++)
	{
		result = first_number + second_number;
		first_number = second_number;
		second_number = result;
		printf("%lu, ", result);
	}

	printf("%lu\n", result + first_number);
	return (0);
}
