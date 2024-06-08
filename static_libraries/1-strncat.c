#include "main.h"

/**
 * _strncat - joins two strings but with n bytes
 * @dest: destination
 * @src: source
 * @n: the number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int counter = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (counter < n && src[counter] != '\0')
	{
		dest[count] = src[counter];
		count++;
		counter++;
	}

	return (dest);
}
