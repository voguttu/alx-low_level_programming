#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
  * main - Entry point
  *
  * Description: program that prints the minimum number of coins to make change
  *
  * @argc: argument count
  * @argv: amount of money to make change
  *
  * Return: Always 0 (success), otherwise return 1 (Error)
  */

int main(int argc, char *argv[])
{
	int i, chg, count, cents, divz, rem;

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
	divz = chg / 25;
	rem = chg % 25;

	if (rem == 0)
	{
		cents = divz;
		printf("%d\n", cents);
	}
	else if ((rem > 0) && ((rem) % 10 == 0))
	{
		cents = (divz + (rem / 10));
		printf("%d\n", cents);
	}
	else if (rem > 0 && ((rem % 10) % 5 == 0))
	{
		cents = (divz + (rem / 10) + (rem % 10) / 5);
		printf("%d\n", cents);
	}
	else if (rem > 0 && (((rem % 10) % 5) % 2 == 0))
	{
		cents = (divz + (rem / 10) + ((rem % 10) / 5) + ((rem % 10) % 5) / 2);
		printf("%d\n", cents);
	}
	else if (rem > 0 && ((((rem % 10) % 5) % 2) % 1 == 0))
	{
		cents = (divz + rem / 10 + (rem % 10) / 5) + (((rem % 10) % 5) / 2)
			+ ((((rem % 10) % 5) % 2) / 1);
		printf("%d\n", cents);
	}
	return (0);
}
