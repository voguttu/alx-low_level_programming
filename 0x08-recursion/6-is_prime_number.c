#include "main.h"

/**
  * is_prime_number - function that checks if input integer
  * is a prime number.
  *
  * @n: Member
  *
  * Return: returns 1 if the input integer is a prime number
  * otherwise return 0
  */

int is_prime_number(int n)
{
	int a, count;

	a = 1;
	count = 0;

	if ((n % a) == 0)
	{
		count++;
		a++;
		if (a <= n)
		{		
			is_prime_number(n);
		}
	}
	if (count > 2)
	{
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar('\n');
		return (1);
	}
}
