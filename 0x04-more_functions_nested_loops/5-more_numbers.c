#include "main.h"

/**
 * more_numbers - function that prints 10 times
 * the numbers, from 0 to 14
 *
 * Return: Void
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9 && b <= 14)
			{
			_putchar('0' + b / 10);
			}
			if (b >= 0 && b <= 14)
			{
				_putchar('0' + b % 10);
			}
		}
		_putchar('\n');
	}
}
