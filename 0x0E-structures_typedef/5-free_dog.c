#include "dog.h"

/**
 * free_dog - frees a memory of type dog_t
 * @d: pointer to freed memory
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
