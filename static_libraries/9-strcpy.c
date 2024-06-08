#include "main.h"

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
