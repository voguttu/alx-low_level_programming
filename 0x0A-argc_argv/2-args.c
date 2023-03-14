#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: First member
 * @argv: Second member
 *
 * Description: parogram tt prints all arguments it receives
 *
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int a = 0;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
