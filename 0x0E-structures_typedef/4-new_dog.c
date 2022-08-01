#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, len_name, len_owner;
	dog_t *n_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	n_dog = (dog_t *)malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);
	len_name = strlen(name);
	len_name++;
	n_dog->name = malloc(len_name * sizeof(char));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		n_dog->name[i] = name[i];
	n_dog->age = age;
	len_owner = strlen(owner);
	len_owner++;
	n_dog->owner = malloc(len_owner * sizeof(char));
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i < len_owner; i++)
		n_dog->owner[i] = owner[i];
	return (n_dog);
}
