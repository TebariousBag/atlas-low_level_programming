#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - function copies string to dest
 * @dest: destination
 * @src: is the source of the string
 * Return: the src string to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
