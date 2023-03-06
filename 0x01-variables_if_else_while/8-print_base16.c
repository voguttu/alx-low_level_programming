#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: 'program that prints all the numbers of
  * base 16 in lowercase, followed by a new line'
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		b = a % 16;
		putchar('0' + b);
	}
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
