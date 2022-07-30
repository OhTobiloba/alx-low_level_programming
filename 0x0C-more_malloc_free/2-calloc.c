#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size in bytes of the elements
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		pointer[i] = 0;
	return (pointer);
}
