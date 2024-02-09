#include "main.h"
/**
 * _strncpy - function copies a string
 * @dest: destination
 * @src: source file
 * @n: how many to copy
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)

{
	int counter = 0;

	while (counter < n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;

	}

	return (dest);

}
