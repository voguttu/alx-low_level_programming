#include "main.h"

/**
  * print_line - function that draws a straight line
  *
  * @n: member
  *
  * Return: Void
  */

void print_line(int n)
{
	int i;

	i = n;

	if (i <= 0)
	{
		_putchar('\n');
	}
	else if (i > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
