#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n:  number of strings passed to the function
 *
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s_print;
	unsigned int i;
	const char *str;

	va_start(s_print, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(s_print, const char *);
		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(s_print);
	printf("\n");
}
