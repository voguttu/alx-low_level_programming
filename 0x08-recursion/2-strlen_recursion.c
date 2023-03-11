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
	int length = 0;

	length++;
	if (*s != '\0')
	{
		s++;
		_strlen_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
	return (length);
}
