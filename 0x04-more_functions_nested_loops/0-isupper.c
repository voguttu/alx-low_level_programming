#include "main.h"

/**
  * _isupper - function that checks for uppercase character
  *
  * @c: member
  *
  * Return: return 1 if uppercase
  * otherwise 0
 */

int _isupper(int c)
{
	if (c == 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
