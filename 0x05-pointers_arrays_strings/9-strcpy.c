#include "main.h"

int _putchar(char c);
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
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
