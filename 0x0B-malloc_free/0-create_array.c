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
	unsigned int a, n;
	char *p;

	n = size;
	p = malloc(n * sizeof(c));
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < n; a++)
	{
		p[a] = c;
	}
	return (p);
}
