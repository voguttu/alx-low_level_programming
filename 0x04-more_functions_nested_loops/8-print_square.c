#include "main.h"
 
/**
 * print_square - function that prints a square
 *
 * @size: size of square
 *
 * Return: Void
 */

void print_square(int size)
{
	int *a;

	a = &size;

	while (*a <= size)
	{
		for (*a = size; *a <= size; a++)
		{
			if (*a <= size)
			{
				_putchar('#');
			}
		/*	else if (b > 9 && b <= 14)
			{
				_putchar('0' + b / 10);
				_putchar('0' + b % 10);
			}*/
		}
		_putchar('\n');
		a++;
	}
}
