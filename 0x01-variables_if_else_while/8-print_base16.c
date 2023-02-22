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
	int a = 0;

	while (a <= 16)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
