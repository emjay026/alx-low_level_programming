#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
* _strlen - returns the length of a string.
* @s: a string argument.
*
* Return: length of string argument.
*/
int _strlen(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (*s++)
		{
			length++;
		}
	}

	return (length);
}

/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
* @src: source string
*
* Return: destination buffer
*/
char *_strcpy(char *src)
{
	int size = _strlen(src) + 1, i;
	char *p = malloc(sizeof(p) * size);

	for (i = 0; i < size; i++)
	{
		p[i] = src[i];
	}

	return (p);
}


/**
* new_dog - function that creates a new dog.
* @name: name of dog.
* @age: age of dog.
* @owner: dog's owner.
*
* Return: pointer to a dog structure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doggo;

	doggo = malloc(sizeof(doggo));

	if (doggo == NULL)
	{
		return (NULL);
	}
	else
	{
		if (name == NULL)
			doggo->name = NULL;
		else
			doggo->name = _strcpy(name);

		doggo->age = age;

		if (owner == NULL)
			doggo->owner = NULL;
		else
			doggo->owner = _strcpy(owner);

		return (doggo);
	}
}
