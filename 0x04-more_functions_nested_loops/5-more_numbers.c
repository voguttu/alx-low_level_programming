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

	a = 0;
	while (a < 10)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b <= 9)
			{
			_putchar(b + '0');
			}
			else if (b > 9 && b <= 14)
			{
				_putchar('0' + b / 10);
				_putchar('0' + b % 10);
			}
		}
		_putchar('\n');
		a++;
	}
}
