#include "main.h"
/**
 * _strncat - function joins 2 strings, not all bytes
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
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
	dest[count] = '\0';
	return (dest);
}
