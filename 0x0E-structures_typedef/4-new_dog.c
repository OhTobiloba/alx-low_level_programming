<<<<<<< HEAD
nclude <stdio.h>
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
=======
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int len_name = 0, len_owner = 0, i;
>>>>>>> 7861c4703ff326debd4eee34a30a388278f7f07b

	if (name == NULL || owner == NULL)
		return (NULL);

<<<<<<< HEAD
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
=======
	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpyname = malloc(len_name + 1);
	if (cpyname == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpyname[i] = name[i];
	cpyname[i] = '\0';

	cpyowner = malloc(len_owner + 1);
	if (cpyowner == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpyowner[i] = owner[i];
	cpyowner[i] = '\0';

	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
>>>>>>> 7861c4703ff326debd4eee34a30a388278f7f07b
}
