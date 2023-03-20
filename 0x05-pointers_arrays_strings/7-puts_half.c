#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an
 * array of integers
 *
 * @a: First member
 * @n: Second member
 *
 * Return: Void
 */

int _strlen(char *s);

void print_array(int *a, int n)
{
	int my_sl;

	n = 0;
	my_sl = _strlen(a);
	for (a = n; a < my_sl; a++)
		{
			printf("%d, ", a[n]);
			str++;
		}
	}
	else if (my_sl % 2 != 0)
	{
		n = (my_sl - 1) / 2;
		for (a = n; a < my_sl && a != '\0'; a++)
		{
			_putchar(str[n]);
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
