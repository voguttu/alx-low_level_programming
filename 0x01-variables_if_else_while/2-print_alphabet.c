#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'program that prints the
 * alphabet in lowercase, followed by a new line'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
