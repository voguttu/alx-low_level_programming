#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n:  number of integers passed to the function
 *
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list _print;
	unsigned int i;

	va_start(_print, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(_print, unsigned int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(_print);
	printf("\n");
}
