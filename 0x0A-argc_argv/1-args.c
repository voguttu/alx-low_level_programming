#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: First member
 * @argv: Second member
 *
 * Description: program that prints the number of arguments passed into it
 *
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int  b, count;

	count = -1;
	for (b = 0; b < argc; b++)
	{
		argv[b]++;
		count++;
	}
	printf("%d\n", count);
	return (0);
}
