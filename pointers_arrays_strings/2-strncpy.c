#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: the number
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
