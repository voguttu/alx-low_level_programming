#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @*s: String to be reversed
 * @s: string characters to be counted
 *
 * Return: Void
 */

int _strlen(char *s);

void rev_string(char *s)
{
	int a, my_sl;

	my_sl = _strlen(s);
	for (a = my_sl; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
/**
 * _strlen - function that counts string length
 *
 * @s: string characters to be counted
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
