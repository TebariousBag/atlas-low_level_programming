#include "main.h"

/**
 * _memcpy - copies n memory fro source and moves to dest
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}
