#include "main.h"

void _puts(char *str);
int _strlen(char *s);

/**
  * char *_strcpy - function that copies the string pointed
  *
  * @dest: First Member
  * @src: Second member
  *
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		dest[i] = src[i - 1];
	}
	dest = src;
	_puts(dest);
	return (dest);
}
/**
 * _puts - function that prints a string
 *
 * @str: String to be printed
 *
 * Return: Void
 */

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
