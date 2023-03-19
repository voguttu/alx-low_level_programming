#include "main.h"

/**
 * puts2 - function that prints every other character of
 * a string, starting with the first character
 *
 * @*str: String to be printed
 * @s: string characters to be counted
 *
 * Return: Void
 */

int _strlen(char *s);

void puts2(char *str)
{
	int a, my_sl;

	my_sl = _strlen(str);
	for (a = 0; a < my_sl; a += 2)
	{
		_putchar(*str);
		str += 2;
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
