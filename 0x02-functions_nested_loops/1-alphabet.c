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
	int a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
