#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 *
 * @min: 1st member
 * @max: 2nd member
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, size, *array;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = (int *)malloc(size * sizeof(int));
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = min++;
		}
	}
	else
	{
		return (NULL);
	}
	return (array);
}
