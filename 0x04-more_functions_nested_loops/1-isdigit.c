#include "main.h"

/**
  * _isdigit - function that checks for a digit
  *
  * @c: member
  *
  * Return: return 1 if a digit
  * otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
