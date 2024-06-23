#include "dog.h"
#include <string.h>

/**
 * _strlen - returns length of string
 * @s: parameter
 * Return: length of string
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
 * _strcpy - copies string to dest
 * @dest: destination parameter
 * @src: source parameter
 * Return: value of src
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - function creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog or NULL for failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *sizeown;
	char *sizename;
	dog_t *mydog;

	sizeown = malloc(sizeof(*owner) * (_strlen(owner) + 1));
	sizename = malloc(sizeof(*name) * (_strlen(name) + 1));
	mydog = malloc(sizeof(dog_t));

	if (mydog == NULL)
	{
		return (NULL);
	}
	if (mydog->owner == NULL)
	{
		return (NULL);
	}
	if (mydog->name == NULL)
	{
		return (NULL);
	}
	_strcpy(mydog->owner, owner);
	_strcpy(mydog->name, name);
	mydog->age = age;

	return (mydog);
}