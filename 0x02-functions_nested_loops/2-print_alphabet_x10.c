#include "main.h"
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
	int b = 0;

	while (b <= 10)
	{
		int a = 'a';

		while (a < 'z')
		{
			_putchar(a);
			a++;
		}
		b++;
	}
	_putchar(10);
	return (0);
}
