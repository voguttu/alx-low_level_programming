#include "main.h"

/**
 * _islower -function that checks for lowercase character
 *
 * @c: The value to test whether lowercase
 *
 * Return: On success 1.
 * Otherwise 0 is returned
 */

int _islower(int c)
{
	char ch;

	ch = c;
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
