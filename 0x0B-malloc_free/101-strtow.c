#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int count_words(char *str);
void free_words(char **words);
/**
 * strtow - function that splits a string into words
 *
 * @str: string to be split
 *
 * Return: NULL if funtion fails, str == NULL or str == ""
 */

char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k;
	int word_length, index;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	word_count = count_words(str);
	if (word_count == 0)
	{
		return (NULL);
	}
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			i++;
		}
		word_length = 0;
		j = i;
		while (str[j] != ' ' && str[j] != '\t' && str[j] != '\n' && str[j] != '\0')
		{
			word_length++;
			j++;
		}
		words[index] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[index] == NULL)
		{
			free_words(words);
			return (NULL);
		}
		k = 0;
		while (i < j)
		{
			words[index][k] = str[i];
			i++;
			k++;
		}
		words[index][k] = '\0';
		index++;
	}
	words[index] = NULL;
	return (words);
}
/**
 * count_words - Count the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * free_words - Funtion that frees allocated memory
 *
 * @words: member
 *
 * Return: void
 */
void free_words(char **words)
{
	int i = 0;

	if (words == NULL)
	{
		return;
	}
	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}
	free(words);
}
