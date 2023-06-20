#include "main.h"

int is_prime(int n, int tester);
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
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(n, 2));
	}
}
/**
 * is_prime - helper function that checks if input integer
 * is a prime number.
 *
 * @n: Member
 * @tester: number used to check if integer is divisible
 * Return: returns 1 if the input integer is a prime number
 * otherwise return 0
 */

int is_prime(int n, int tester)
{
	if ((tester * tester) > n)
	{
		return (1);
	}
	if ((n % tester) == 0)
	{
		return (0);
	}
	return (is_prime(n, tester + 1));
}
