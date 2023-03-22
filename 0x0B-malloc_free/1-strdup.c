#include "main.h"
#include <stdlib.h>

/**
  * _strdup - function that returns a pointer to a newly allocated
  * space in memory, which contains a copy of the string given as a parameter
  *
  * @s: Pointer to the string to be copied
  *
  * Return: returns pointer to duplicated string
  * otherwise returns NULL if str = NULL or insufficient memory
  */
int _strlen(char *s);

char *_strdup(char *str)
{
	int a, n;
	char *p1;
	char *p2;

	n = _strlen(str);

	p1 = malloc(sizeof(str) * n);
	if (str == NULL)
	{
		return (NULL);
	}
	p1 = str;
	p2 = malloc(sizeof(str) * n);
	for (a = 0; a < n; a++)
	{
		p2[a] = p1[a];
	}
	p2[a] = '\0';
	return (p2);
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
