#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: Number of arguments
 *
 * Return: Sum or (0) if n==0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum;

	va_start(add, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(add, unsigned int);
		}
	}
	va_end(add);
	return (sum);
}
