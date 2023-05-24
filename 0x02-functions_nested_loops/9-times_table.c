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
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			_putchar('0' + c);
			if (b <= 8)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
