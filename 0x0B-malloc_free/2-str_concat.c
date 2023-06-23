#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
  * str_concat - function that concatenates two strings
  *
  * @s1: first member
  * @s2: second member
  *
  * Return: Concated string
  * Otherwise return NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	int a, b, n1, n2, n3;
	char *p3;

	if (s1 == NULL || s2 == NULL || (s1 && s2 == NULL))
	{
		return (NULL);
	}

	n1 = _strlen(s1);
	n2 = _strlen(s2);
	n3 = n1 + n2;
	p3 = malloc(sizeof(char) * (n3 + 1));

	if (p3 == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < n1; a++)
	{
		p3[a] = s1[a];
	}
	for (b = 0; b < n2; b++)
	{
		p3[a + b] = s2[b];
	}
	p3[a + b] = '\0';
	return (p3);
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
