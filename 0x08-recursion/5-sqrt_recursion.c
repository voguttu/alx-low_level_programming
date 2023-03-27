#include "main.h"

/**
  * _sqrt_recursion - function that returns the
  * natural square root of a number.
  *
  * @n: Member
  *
  * Return: Natural square root
  * Otherwise return -1 if no natural square root
  */

int _sqrt_recursion(int n)
{
	int srt, a;
	
	a = 1;
	if (n < 0)
	{
		return (-1);
	}
	while ((n -= a) != 0)
	{
		a++;
		return (1);
	}
	else
	{
		n -= a;
		srt++;
		a++2;
		_sqrt_recursion(n);
	}
	return (srt);
}
