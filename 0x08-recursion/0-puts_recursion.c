#include "main.h"

/**
  * _puts_recursion - function that prints a string
  *
  * @s: Member
  *
  * Return: Void
  */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
	}
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
	_putchar('\n');
	}
}
