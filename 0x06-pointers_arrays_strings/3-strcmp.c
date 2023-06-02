#include "main.h"

/**
  * _strcmp - function that compares two strings
  *
  * @s1: 1st Member
  * @s2: 2nd member
  *
  * Return: (-ve) if s1 < s2
  * (+ve) if s1 > s2
  * (0) if s1 == s2
  *
  */

int _strcmp(char *s1, char *s2)
{
	int a, b;

	a = _strlen(s1);
	b = _strlen(s2);

	if (a < b)
	{
		return (-15);
	}
	else if (a > b)
	{
		return (15);
	}
	else if (a == b)
	{
		return (0);
	}
	return (0);
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
