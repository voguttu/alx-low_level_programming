#include "main.h"

char _upper(char c);
int _isalpha(int c);
int _strlen(char *s);
/**
  * cap_string - function that capitalizes all words of a string
  *
  * @str: string to be converted
  *
  * Return: converted string
  */

char *cap_string(char *str)
{
	int i, capital;

	if (str == 0)
	{
		return (0);
	}
	else
	{
		capital = 1;
		for (i = 0; str[i] != '\0'; i++)
		{
			if (capital && _isalpha(str[i]) && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = _upper(str[i]);
			}
			capital = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
					|| str[i] == ',' || str[i] == ';' || str[i] == '.'
					|| str[i] == '!' || str[i] == '?' || str[i] == '"'
					|| str[i] == '(' || str[i] == ')' || str[i] == '{'
					|| str[i] == '}');
		}
	}
	return (str);
}
/**
 * _upper -function that converts lower to uppercase
 *
 * @c: The value to test
 *
 * Return: Uppercase letter
 */
char _upper(char c)
{
	return (c - 'a' + 'A');
}
/**
 * _isalpha -function that checks for alphabetic character
 *
 * @c: The value to test whether alphabet
 *
 * Return: On success 1.
 * Otherwise 0 is returned
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
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
