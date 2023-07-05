#include <stdio.h>

/**
 * print_message - function that prints string before
 * main function is executed
 * Return: void (success)
 */
void print_message(void) __attribute__((constructor));

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
