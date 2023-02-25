#include "main.h"

/**
  * print_alphabet - Function prints the alphabet,
  * in lowercase, followed by a new line'
  *
  * Return: Always 0 (Success)
  */

void print_alphabet(void)
{
	int lca = 'a';

	while (lca <= 'z')
	{
		_putchar(lca);
		lca++;
	}
	_putchar('\n');
}
