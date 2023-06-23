#include "main.h"

int _strlen(char *s);
/**
  * _strcat - function that concatenates two strings
  *
  * @src: String to be copied
  * @dest: Copied string
  *
  * Return: pointer to the resulting string
  */

char *_strcat(char *dest, char *src)
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
	for (a = 0; a < n2; a++)
	{
			dest[b] = str2[a];
			b++;
	}
	dest[b] = '\0';
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
