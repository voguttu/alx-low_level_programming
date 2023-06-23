#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: string
 * @needle: substring to be checked
 *
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *s;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		a = needle;
		s = haystack;
		while (*a != '\0' && *s == *a)
		{
			s++;
			a++;
		}
		if (*a == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
