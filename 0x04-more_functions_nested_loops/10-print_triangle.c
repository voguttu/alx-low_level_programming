#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *
 *  @size: size of triangle
 *
 *  Return: Void
 */

void print_triangle(int size)
{
	int *a;

	a = &size;

	for (*a < size; *a = size; a++)
	{
		for (*a < size; *a = size; a++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
