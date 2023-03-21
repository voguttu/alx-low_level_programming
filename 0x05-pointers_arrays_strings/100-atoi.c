#include "main.h"

/**
  * _atoi - function that convert a string to an integer
  *
  * @s: Member
  *
  * Return: Zero if no numbers in string
  */

int _atoi(char *s)
{
	int a = 0;
	int result = 0;
	int sign = 1;

	for (; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
		{
			sign *= - 1;
		}
		else if (s[a] >= '0' && s[a] <= '9')
		{
			result = result * 10 + s[a] - '0';
		}
		else if (s[a] < '0' && s[a] > '9')
		{
			return (0);
		}
	}
	return (sign * result);
}
