#include "main.h"

/**
  * _strncpy - function that copies a string
  *
  * @src: String to be copied
  * @dest: Copied string
  * @n: number of bytes  to be copied
  *
  * Return: pointer to the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, n1;
	char *str1;

	n1 = _strlen(src);
	str1 = src;

	for (a = 0; a < n && a <= n1; a++)
	{
		dest[a] = str1[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
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
