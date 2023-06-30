#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: array size in bytes
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, t_size;
	void *ptr;
	unsigned char *mem_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	t_size = nmemb * size;
	ptr = malloc(t_size);

	if (ptr != NULL)
	{
		mem_ptr = (unsigned char *) ptr;
		for (i = 0; i < t_size; i++)
		{
			mem_ptr[i] = 0;
		}
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}
