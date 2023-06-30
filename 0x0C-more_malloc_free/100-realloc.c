#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * using malloc and free
 *
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *bytePtr;
	unsigned char *newBytePtr;
	unsigned int min_size;
	void *new_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr != NULL)
	{
		bytePtr = (unsigned char *)ptr;
		newBytePtr = (unsigned char *)new_ptr;
		min_size = old_size < new_size ? old_size : new_size;

		for (i = 0; i < min_size; i++)
		{
			newBytePtr[i] = bytePtr[i];
		}
		free(ptr);
	}
	else
	{
		return (NULL);
	}
	return (new_ptr);
}
