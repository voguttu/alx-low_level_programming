#include "main.h"

/**
 * print_most_numbers - function that prints the
 * numbers, from 0 to 9 without 2 and 4
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
