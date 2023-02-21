#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97;
	int b = 65;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (b < 90)
	{
		putchar(b);
		b++;
	}
	putchar(10);
	return (0);
}
