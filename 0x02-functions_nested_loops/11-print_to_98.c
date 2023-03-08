#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - function that prints all natural numbers
  *
  * @n: first member
  *
  * Return:  first number to be printed
  */

void print_to_98(int n)
{
	while (n < 98)
	{
		if (n <= 97)
		{
			printf("%d, ", n);
		}
		n++;
	}
	while (n > 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
		}
		n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
