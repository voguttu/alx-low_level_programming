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
	if (n >= 0)
	{
		n = n % 10;
		_putchar(n + '0');
	}
	else if (n < 0 && n != 0)
	{
		n = (n * (-1)) % 10;
		_putchar(n + '0');
	}
	return (n);
}
