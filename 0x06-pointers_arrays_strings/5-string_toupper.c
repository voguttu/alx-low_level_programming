#include "main.h"

/**
  * string_toupper - function that changes all lowercase
  * letters of a string to uppercase
  *
  * @str: String to be checked
  *
  * Return: modified string
  */

char *string_toupper(char *str)
{
	char *ptr = str;

	if (str == 0)
	{
		return (0);
	}
	else
	{
		while (*ptr != '\0')
		{
			if (*ptr >= 'a' && *ptr <= 'z')
			{
				*ptr = *ptr - 'a' + 'A';
			}
			ptr++;
		}
	}
	return (str);
}
