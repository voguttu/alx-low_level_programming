#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char c_val;
	int i_val;
	float f_val;
	char *s_val;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c' && format[i + 1] != '\0')
		{
			c_val = (char)va_arg(args, int);
			printf("%c, ", c_val);
		}
		else if (format[i] == 'i' && format[i + 1] != '\0')
		{
			i_val = va_arg(args, int);
			printf("%d, ", i_val);
		}
		else if (format[i] == 'f' && format[i + 1] != '\0')
		{
			f_val = (float)va_arg(args, double);
			printf("%f, ", f_val);
		}
		else if (format[i] == 's')
		{
			s_val = va_arg(args, char *);
			if (s_val != NULL)
				printf("%s", s_val);
			else if (s_val == NULL)
				printf("(nil)");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
