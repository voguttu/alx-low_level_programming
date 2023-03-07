 #include "main.h"

/**
  * _isalpha -function that checks for alphabetic character
  *
  * @c: The value to test whether alphabet
  *
  * Return: On success 1.
  * Otherwise 0 is returned
  */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
