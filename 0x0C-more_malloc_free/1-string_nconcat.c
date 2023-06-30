#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
void _puts(char *str);
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 * @n: number of bytes
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int l_s1;
	unsigned int l_s2;
	unsigned int total_l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	l_s1 = _strlen(s1);
	l_s2 = _strlen(s2);

	if (n >= l_s2)
	{
		n = l_s2;
	}
	total_l = l_s1 + n;
	s3 = (char *)malloc((total_l + 1) * sizeof(char));
	if (s3 == NULL)
	{
		return (NULL);
	}
	_strcpy(s3, s1);
	_strncpy(s3, s2, n);
	s3[total_l] = '\0';
	return (s3);
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
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		dest[i] = src[i - 1];
	}
	dest = src;
	_puts(dest);
	return (dest);
}
/**
 * _puts - function that prints a string
 *
 * @str: String to be printed
 *
 * Return: Void
 */
void _puts(char *str)
{
	int a, my_sl;

	my_sl = _strlen(str);
	for (a = 0; a < my_sl; a++)
	{
		_putchar(*str);
		str++;
	}
}
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
