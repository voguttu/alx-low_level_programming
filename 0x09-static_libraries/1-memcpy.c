#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @src: memory area to be copied
 * @dest: copied memory area
 * @n: number of bytes of the memory area
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
			dest[i] = src[i];
	}
	return (dest);
}
