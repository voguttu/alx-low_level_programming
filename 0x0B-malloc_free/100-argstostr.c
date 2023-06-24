#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * argstostr - function that concatenates all the arguments
 *
 * @ac: argument count
 * @av: strings to be concated
 *
 * Return: Pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, t_len, count;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	t_len = 0;
	for (i = 0; i < ac; i++)
	{
		t_len = (_strlen(av[i])) + 1;
	}

	str = malloc((t_len + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	count = 0;
	for (i = 0; i < ac; i++)
	{
		_strcpy(str + count, av[i]);
		count += _strlen(av[i]);
		str[count] = '\n';
		count++;
	}
	str[count] = '\0';
	return (str);
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
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
