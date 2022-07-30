#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer number
 * @max: last integer number
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int limit1, limit2;
	int *pointer;

	if (min > max)
		return (NULL);
	limit2 = max - min + 1;
	pointer = malloc(sizeof(int) * limit2);

	if (pointer == NULL)
		return (NULL);
	for (limit1 = 0; limit1 < limit2; limit1++, min++)
	{
		pointer[limit1] = min;
	}
	return (pointer);
}
