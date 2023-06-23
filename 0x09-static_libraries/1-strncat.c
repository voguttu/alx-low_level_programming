#include "main.h"

int _strlen(char *s);
/**
  * _strncat - function that concatenates two strings upto
  * n bytes
  *
  * @src: String to be copied
  * @dest: Copied string
  * @n: number of bytes  to be concated
  *
  * Return: pointer to the resulting string
  */

char *_strncat(char *dest, char *src, int n)
{
	int a, b, n1, n2;
	char *str1;
	char *str2;

	n1 = _strlen(dest);
	n2 = _strlen(src);
	str1 = dest;
	str2 = src;

	b = 0;
	for (a = 0; a < n1; a++)
	{
			dest[b] = str1[a];
			b++;
	}
	for (a = 0; a < n && a <= n2; a++)
	{
			dest[b] = str2[a];
			b++;
	}
	return (dest);
}
/**
 * _strlen - function checking the length of a string
 *
 * @s: string to checked
 *
 * Return: Always 0.
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
