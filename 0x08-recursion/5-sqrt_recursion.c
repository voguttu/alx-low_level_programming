#include "main.h"

int _sqrt(int n, int start, int end);
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
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt(n, 1, n));
	}
}
/**
 * _sqrt - Helper funtion to calculate sqrt
 *
 * @n: first member
 * @start: second member
 * @end: third member
 *
 * Return: Natural square root else return (-1)
 */

int _sqrt(int n, int start, int end)
{
	int mid = start + (end - start) / 2;

	if (start > end)
	{
		return (-1);
	}
	if (mid == n / mid && n % mid == 0)
	{
		return (mid);
	}
	else if (mid > n / mid)
	{
		return (_sqrt(n, start, mid - 1));
	}
	else
	{
		return (_sqrt(n, mid + 1, end));
	}
}
