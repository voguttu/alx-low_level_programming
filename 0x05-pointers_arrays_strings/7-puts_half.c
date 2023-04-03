#include "main.h"

int _strlen(char *s);
/**
 * puts_half - function that prints the second half of a string
 *
 * @str: String to be printed
 *
 * Return: Void
 */

void puts_half(char *str)
{
	int a, my_sl, n;

	my_sl = _strlen(str);
	if (my_sl % 2 == 0)
	{
		n = my_sl / 2;
		for (a = n; a < my_sl; a++)
		{
			_putchar(str[my_sl / 2]);
			str++;
		}
	}
	else if (my_sl % 2 != 0)
	{
		n = (my_sl - 1) / 2;
		for ( ; a < n; a++)
		{
			_putchar(str[n + 1]);
			str++;
		}
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
