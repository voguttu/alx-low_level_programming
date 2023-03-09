#include "main.h"
#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: program that prints the numbers from 1 to 100
  * for multiples of three print Fizz
  * for the multiples of five print Buzz
  * multiples of both three and five print FizzBuzz
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("Fizz Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
