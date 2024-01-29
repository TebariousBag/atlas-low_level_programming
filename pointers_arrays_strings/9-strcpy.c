#include "main.h"
/**
 * strcpy - function copies string to dest
 * @dest: destination
 * @src: is the source of the string
 * Return: the src string to dest
 */

char *_strcpy(char *dest, char *src)

{
	char *i = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return i;
}

