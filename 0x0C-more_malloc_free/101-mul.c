#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _isdigit(const char *str);
void mul(const char *num1, const char *num2);
int _strlen(const char *str);
/**
 * main - main function
 * @argc: 1st member
 * @argv: 2nd member
 * Return: result
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	mul(argv[1], argv[2]);
	return (0);
}
/**
 * _isdigit - function that checks for a digit
 * @str: member
 * Return: return 1 if a digit otherwise 0
 */
int _isdigit(const char *str)
{
	while (*str)
	{
		if (!_isdigit(str))
			return (0);
		str++;
	}
	return (1);
}
/**
 * mul -function that multiplies two positive numbers
 * @num1: 1st member
 * @num2: 2nd member
 * Return: void
 */
void mul(const char *num1, const char *num2)
{
	int len1, len2, t_len, *result;
	int i, j, digit1, digit2, product;
	int pos1, pos2, sum, start;

	if (!_isdigit(num1) || !_isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(num1);
	len2 = _strlen(num2);
	t_len = len1 + len2;
	result = calloc(t_len, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			product = digit1 * digit2;
			pos1 = i + j;
			pos2 = i + j + 1;
			sum = product + result[pos2];
			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}
	start = 0;
	while (start < t_len - 1 && result[start] == 0)
	{
		start++;
	}
	for (i = start; i < t_len; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");
	free(result);
}
/**
 * _strlen - function checking the length of a string
 * @str: string to checked
 * Return: Always 0.
 */
int _strlen(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
