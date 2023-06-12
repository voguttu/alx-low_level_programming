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
	int count, b, sum;

	b = 0;
	count = -1;

	for (b = 0; b < argc; b++)
	{
		count++;
	}
	if (count == 0)
	{
		printf("0\n");
		return (0);
	}
	else if (count >= 1)
	{
		int a;

		sum = 0;

		for (b = 1; b < argc; b++)
		{
			char *arg = argv[b];
			int c = 0;

			while (arg[c] != '\0')
			{
				if (!isdigit(arg[c]))
				{
					printf("Error\n");
					return (1);
				}
				c++;
			}
			a = atoi(arg);
			sum += a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
