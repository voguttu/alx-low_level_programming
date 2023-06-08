#include "main.h"

/**
  * times_table - function that prints the 9 times table
  *
  * Return: Void
  */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar('0' + c);
			}
			else if (b > 0 && b <= 9 && c <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + c);
			}
			else if (b <= 9 && c > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
