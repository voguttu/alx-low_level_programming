#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'program that prints the lowercase alphabet in reverse,
 * followed by a new line'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
