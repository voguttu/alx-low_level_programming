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
	int a;

	for (a = 0; a < **argv[]; a++)
	{
		printf("%d\n", a);
	}
	return (0);
}
