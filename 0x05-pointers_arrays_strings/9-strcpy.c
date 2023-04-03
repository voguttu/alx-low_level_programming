#include "main.h"

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
	int a, my_sl;

	my_sl = _strlen(src);
	for (a = 0; a < my_sl + 1; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
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
