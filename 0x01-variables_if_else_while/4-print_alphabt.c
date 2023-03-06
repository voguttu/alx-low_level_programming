#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'program that prints the alphabet
 * in lowercase except q and e, followed by a new line'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		if (a == 101)
		{
			a++;
		}
		else if (a == 113)
		{
			a++;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
