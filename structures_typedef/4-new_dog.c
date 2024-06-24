#include "dog.h"
#include <string.h>
#include <stdlib.h>

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
	dog_t *mydog;

	mydog = malloc(sizeof(dog_t));

	if (mydog == NULL)
	{
		return (NULL);
	}
	mydog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}
	mydog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog);
		return(NULL);
	}
	_strcpy(mydog->owner, owner);
	_strcpy(mydog->name, name);
	mydog->age = age;

	return (mydog);
}