#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'program that prints all possible different
 * combinations of two different digits'
 * Numbers separated by , followed by a space
 * Prints only the smallest combination of two digits
 * Numbers printed in ascending order
 * putchar used five times maximum
 * All your code in the main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 48;
	int b;

	while (a < 57)
	{
		b = 49;
		while (b < 58)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a < 56)
				{
				putchar(',');
				putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
