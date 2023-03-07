#include <stdio.h>

/**
  * Main - Entry Point
  *
  * Description: 'Program that prints all possible
  * different combinations of three digits.'
  * The three digits must be different
  * Prints only the smallest combination of three
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int a = '0';
	int b;
	int c;

	while (a <= '7')
	{
		b = '1';
		while (b <= '8')
		{
			if (b > a)
			{
				c = '2';
				while (c <= '9')
				{
					if (c > b)
					{
						putchar(a);
						putchar(b);
						putchar(c);
					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
					}
					c++;
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
