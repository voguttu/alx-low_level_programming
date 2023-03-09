#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n: member
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	int *i;

	i = &n;

	if (*i <= 0)
	{
		_putchar('\n');
	}
	else if (*i >= 1)
	{
		for (*i = 1; *i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
	/*		for (*i = 1; *i <= n; i++)
			{*/
				_putchar(' ');
		/*		_putchar(' ');
				}
_putchar:('\n'); */
		}
	}
}
