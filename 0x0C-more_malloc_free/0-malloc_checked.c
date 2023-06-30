#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: member
 *
 * Return: Pointer to allocated memory
 * exit with status 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *checked;

	checked = malloc(b);

	if (checked == NULL)
	{
		exit(98);
	}
	else
	{
		return (checked);
	}
}
