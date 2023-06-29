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
		while (!(format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
			i++;
		switch (format[i])
		{
			case 'c':
				{
					c_val = (char)va_arg(args, int);
					printf("%c, ", c_val);
					break;
				}
			case 'i':
				{
					i_val = va_arg(args, int);
					printf("%d, ", i_val);
					break;
				}
			case 'f':
				{
					f_val = (float)va_arg(args, double);
					printf("%f, ", f_val);
					break;
				}
			case 's':
				{
					s_val = va_arg(args, char *);
					if (s_val == NULL)
					{
						printf("(nil)");
					}
					printf("%s", s_val);
				}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
