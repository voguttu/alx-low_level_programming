#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - function that creates a new dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = (char *)malloc((_strlen(name) + 1) * sizeof(char));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	new_dog->owner = (char *)malloc((_strlen(owner) + 1) * sizeof(char));

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}
/**
 * _strlen - function checking the length of a string
 *
 * @s: string to checked
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
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

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

