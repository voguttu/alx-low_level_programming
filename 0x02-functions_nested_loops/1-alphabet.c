#include "main.h"
/**
 * main - check the code
 *
 * Description: 'program that prints the
 * alphabet in lowercase, followed by a new line'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 'a';

	while (a < 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
