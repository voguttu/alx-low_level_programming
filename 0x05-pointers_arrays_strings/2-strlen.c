#include "main.h"

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
