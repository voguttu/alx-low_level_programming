#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
  * str_concat - function that concatenates two strings
  *
  * @s1: first member
  * @s2: second member
  *
  * Return: Concsted string
  * Otherwise return NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	int a, b, n1, n2;
	char *p1;
	char *p2;
	char *p3;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		n1 = _strlen(s1);
		n2 = _strlen(s2);

		p1 = malloc(sizeof(s1) * n1);
		p1 = s1;

		p2 = malloc(sizeof(s2) * n2);
		p2 = s2;

		p3 = malloc((sizeof(s2) * n1) + (sizeof(s2) * n2));

		for (a = 0; a < n1; a++)
		{
			p3[b] = p1[a];
			b++;
		}
		for (a = 0; a < n2; a++)
		{
			p3[b] = p2[a];
			b++;
		}
		p3[b] = '\0';
	}
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
