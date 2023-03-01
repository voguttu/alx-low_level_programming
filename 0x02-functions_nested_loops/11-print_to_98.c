#include "main.h"

void print_to_98(int n)
{
	int a;

	a = n;
	for (a = n; a < 99; a++)
	{
		if (a < 98)
		{
			_putchar(a);
			_putchar(',');
			_putchar(' ');
		}
		else if (a == 98)
		{
			_putchar(a);
		}
		
	}
	for (a = n; 'a' > 98; a--)
	{
		_putchar(a);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
