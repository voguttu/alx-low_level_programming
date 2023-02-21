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
	int ch;

	ch = 65;

	for  (ch = 65, ch <= 90; ch++;)
	{
		putchar(ch);
	}
		putchar(10);
	return (0);
}
