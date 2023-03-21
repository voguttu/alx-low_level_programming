#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @*str: String to be printed
 * @s: string characters to be counted
 *
 * Return: Void
 */

int _strlen(char *s);

void _puts(char *str)
{
	int a, my_sl;

	my_sl = _strlen(str);
	for (a = 0; a < my_sl; a++)
	{
		_putchar(*str);
		str++;
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
