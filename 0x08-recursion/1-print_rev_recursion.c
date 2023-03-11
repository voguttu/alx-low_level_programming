#include "main.h"

/**
  * _print_rev_recursion - function that prints
  * a string in reverse
  *
  * @s: Member
  *
  * Return: Void (Success)
  */

void _print_rev_recursion(char *s)
{
	_putchar(*s);
	s--;
	if (*s < '\0')
	{
		_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
