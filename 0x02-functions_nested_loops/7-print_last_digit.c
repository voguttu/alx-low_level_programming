#include "main.h"

/**
  * print_last_digit - function that prints the
  * last digit of a number
  *
  * @n: member
  *
  * Return: Value of last digit
  */

int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (n < 0)
	{
		a *= -1;
		_putchar(a + '0');
	}
	else
	{
		_putchar(a + '0');
	}
	return (a);
}
