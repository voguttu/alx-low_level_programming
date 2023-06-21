#include "main.h"

int _strlen_recursion(char *s);
int is_palindrome_recursive(char *start, char *end);
/**
 * is_palindrome - function that checks if a string is a palindrome
 *
 * @s: Member
 *
 * Return: Return (1) if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length == 0)
	{
		return (1);
	}
	return (is_palindrome_recursive(s, s + length - 1));
}
/**
 * is_palindrome_recursive - helper function to check palindrome
 *
 * @start: 1st member
 * @end: 2nd member
 *
 * Return: Return 1 if palindrome else 0 if not
 */
int is_palindrome_recursive(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return (is_palindrome_recursive(start + 1, end - 1));
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
