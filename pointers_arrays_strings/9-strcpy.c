#include "main.h"
/**
 * strcpy - function copies string to dest
 * @dest: destination
 * @src: is the source of the string
 * Return: the src string to dest
 */

char *_strcpy(char *dest, char *src)

{
	int index;

	for (index = 0 ; src[index] != '\0' ; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
