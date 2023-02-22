#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'program that prints all possible combinations
 * of single-digit numbers separated by ,followed by a
 * space in ascending order'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);

		if (a < 57)
		{
			putchar(',');
		}
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
