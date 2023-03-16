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
  * Return: Always 0 (success)
  * otherwise return 1 (Error)
  */

int main(int argc, char *argv[])
{
	int count, a, b, sum;

	b = 0;
	a = atoi(argv[b]);
	count = -1;

	for (b = 0; b < argc; b++)
	{
		count++;
	}
	if (count == 0)
	{
		printf("0\n");
	}
	else if (count >= 1)
	{
		sum = 0;
		for (b = 1; b < argc; b++)
		{
			a = atoi(argv[b]);
			sum += a;
		}
		printf("%d\n", sum);
	}
	else if (count >= 1 && isdigit(a) == 0)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
