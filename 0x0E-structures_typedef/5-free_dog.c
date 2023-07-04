#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: member
 *
 * Return: Void (success)
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
