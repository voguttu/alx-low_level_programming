#include "main.h"
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  *
  * @size: First Member
  * @c: Second member
  *
  * Return: Pointer to array
  * otherwise returns NULL if it fails or size is zero
  */

char *create_array(unsigned int size, char c)
{
	int a;
	char *p;

	p = malloc(sizeof(c) * size);

	for (a = 0; a < '\0'; a++)
	{
		_putchar(p[a]);
	}

	return (p);

}
