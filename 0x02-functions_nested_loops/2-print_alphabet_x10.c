#include "main.h"

/**
 * print_alphabet_x10 - Function prints 10 times the
 * alphabet, in lowercase, followed by a new line'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x10 = 0;

	while (x10 < 10)
	{
		int lca = 'a';

		while (lca <= 'z')
		{
			_putchar(lca);
			lca++;
		}
		x10++;
		_putchar('\n');
	}
	return;
}
