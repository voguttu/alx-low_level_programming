#include "main.h"

/**
  * _abs - Function that computes absolute value of int
  *
  * @a: member
  *
  * Return: Always 0 (Success)
  */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else if (a != 0 && a < 0)
	{
		a *= (-1);
	}
	return (a);
}
