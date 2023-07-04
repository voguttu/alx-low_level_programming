#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize variable of type struct dog
 * @d: pointer
 * @name:  1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok\n");
		exit(98);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
