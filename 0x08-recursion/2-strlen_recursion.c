#include "main.h"

/**
  * _strlen_recursion - function that returns the
  * length of a string
  *
  * @s: Member
  *
  * Return: Length of String
  */

int _strlen_recursion(char *s)
{
	int result = 0;

	if (*s != '\0')
	{
		result++;
		s++;
		_strlen_recursion(s);
	}
		return (result);
}
