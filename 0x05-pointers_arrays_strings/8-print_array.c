#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of
 * an array of integers
 *
 * @a: array to be printed
 * @n: number of elements
 *
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i < n && i != '\0')
		{
			printf("%d, ", a[i - 1]);
		}
		else if (i == n && i != '\0')
		{
			printf("%d\n", a[i - 1]);
		}
		else if (n <= 0)
		{
			printf(" \n");
		}
	}
}
