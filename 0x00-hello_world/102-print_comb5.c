#include <stdio.h>

/**
 * main - entry Point
 *
 * Description: program that prints all possible
 * combinations of two two-digit numbers,range from 0 to 99
 *
 * All numbers printed with two digits
 * Combinations separated  by comma, followed by space
 * Combinations are in ascending order
 * Same combinations should not be printed e.g 00 01 & 01 00
 * Use putchar only, max eight times
 * Not allowed to use any variable of type char
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = 1; b <= 99; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');

			if (a == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
