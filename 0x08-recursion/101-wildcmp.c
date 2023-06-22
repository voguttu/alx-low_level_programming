#include "main.h"

/**
  * wildcmp - function that compares two strings considered identical
  *
  * @s1: 1st member
  * @s2: 2nd member
  *
  * Return: returns 1 if strings are considered identical, otherwise return 0
  */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2 || *s2 == '*')
	{
		if (wildcmp(s1 + 1, s2 + 1) == 1)
		{
			return (1);
		}
		else if (*s2 == '*' && wildcmp(s1 + 1, s2) == 1)
		{
			return (1);
		}
	}
	return (0);
}
