#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point
  *
  * @argc: number of arguements
  * @argv: array of strings holding each arguament
  *
  * Description: program that multiplies two numbers
  *
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int mul, a, b, count;

	count = -1;
	for (b = 0; b < argc; b++)
	{
		count++;
	}
	if (count < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = 1;
		for (b = 1; b < argc; b++)
		{
			a = atoi(argv[b]);
			mul *= a;
		}
		printf("%d\n", mul);

	}
	return (0);
}
