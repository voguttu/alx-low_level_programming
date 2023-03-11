#include "main.h"

/**
  * factorial - function that returns the
  * factorial of a given number
  *
  * @n: Member
  *
  * Return: Always 0 (success)
  * otherwise -1 to indicate error
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if  (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
