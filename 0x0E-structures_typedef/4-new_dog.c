#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to the new dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *temp_name;
	char *temp_owner;
	dog_t *new_d;

	temp_name = malloc(sizeof(*name) * (strlen(name) + 1));
	temp_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	new_d = malloc(sizeof(dog_t));

	if (temp_name && temp_owner && new_d)
	{
		strcpy(temp_name, name);
		strcpy(temp_owner, owner);
		new_d->name = temp_name;
		new_d->age = age;
		new_d->owner = temp_owner;
	}
	else
	{
		free(temp_name);
		free(temp_owner);
		free(new_d);
		return (NULL);
	}
	return (new_d);
}
