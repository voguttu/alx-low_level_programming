#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_opcodes - function that prints the opcodes
 * of its own main function
 *
 * @num_bytes: number of bytes
 * Return: nothing
 */

void print_opcodes(int num_bytes)
{
	int i;
	unsigned char *addr;

	addr = (unsigned char *) &print_opcodes;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", addr[i]);
	}
}
/**
 * main - entry point
 * @argc: 1st member
 * @argv: 2nd member
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes(num_bytes);
	printf("\n");
	return (0);
}
