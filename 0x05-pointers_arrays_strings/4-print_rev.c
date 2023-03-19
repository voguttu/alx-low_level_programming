#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @*s: String to be printed
 * @s: string characters to be counted
 *
 * Return: Void
 */

int _strlen(char *s);

void print_rev(char *s)
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
