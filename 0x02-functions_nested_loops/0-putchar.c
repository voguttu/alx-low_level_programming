#include "main.h"

/**
  * main - Entry point
  *
  * Description: 'program that prints _putchar'
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int i;
	char *str = "_putchar";	/* String array declaration */

	for (i = 0; i < 8; i++)	/* For loop to print string cahracters */
	{
		_putchar(str[i]);
	}
	_putchar('\n'); /* Insert new line */

	return (0);
}
