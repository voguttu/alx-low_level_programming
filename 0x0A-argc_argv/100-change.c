#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
  * main - Entry point
  *
  * Description: program that adds positive numbers
  *
  * @argc: argument count
  * @argv: array of integers
  *
  * Return: Always 0 (success), otherwise return 1 (Error)
  */

int main(int argc, char *argv[])
{
	int a, b, c, d, e, i, chg, count, cents;
	

	a = 25;
	b = 10;
	c = 5;
	d = 2;
	e = 1;
	count = 0;

	for (i = 1; i < argc; i++)
	{
		chg = atoi(argv[i]);
		count++;
	}
	if (count != 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (chg < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int divz = chg / a;
		int rem = chg % a;

		if (rem == 0)
		{
			cents = divz;
			printf("%d\n", cents);
		}
		else if ((rem > 0) && ((rem) % b == 0))
		{
			cents = (divz + (rem / b));
			printf("%d\n", cents);
		}
		else if (rem > 0 && ((rem % b) % c == 0))
		{
			cents = (divz + (rem / b) + (rem % b) / c);
			printf("%d\n", cents);
		}
		else if (rem > 0 && (((rem % b) % c) % d == 0))
		{
			cents = (divz + (rem / b) + ((rem % b) / c) + ((rem % b) % c) / d);
			printf("%d\n", cents);
		}
		else if (rem > 0 && ((((rem % b) % c) % d) % e == 0))
		{
			cents = (divz + (rem / b) + (rem % b) / c) + (((rem % b) % c) / d) + ((((rem % b) % c) % d) / e);
			printf("%d\n", cents);
		}
	}
	return (0);
}
