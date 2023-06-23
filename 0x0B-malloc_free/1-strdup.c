#include "main.h"
#include <stdlib.h>

int _strlen(char *s);
/**
  * _strdup - function that returns a pointer which contains
  * copy of the string given as a parameter
  *
  * @str: string to be copied
  *
  * Return: pointer to duplicated string
  * otherwise return NULL if str = NULL or insufficient memory
  */

char *_strdup(char *str)
{
	int n, a;
	char *p;

	n = _strlen(str);
	p = malloc(sizeof(char) * n + 1);
	
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < n; a++)
	{
		p[a] = str[a];
	}
	p[a] = '\0';
	return (p);
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
