#include "main.h"

int _strlen_recursion(char *s);
/**
 * is_palindrome - function that checks if a string is a palindrome
 *
 * @s: Member
 *
 * Return: Return (1) if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i, j;
	int length = _strlen_recursion(s);

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: Member
 *
 * Return: Length of String
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
