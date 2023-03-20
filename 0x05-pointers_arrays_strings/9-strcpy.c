#include "main.h"

/**
  * char *_strcpy - function that copies the string pointed
  *
  * @dest: First Member
  * @src: Second member
  *
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		dest[i] = src[i - 1];
	}
	dest = src;
	for (i = 0; i < '\0'; i++)
	{
		_putchar(dest[i]);
		dest++;
	}
	return (dest); 

}
