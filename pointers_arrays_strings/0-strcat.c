#include "main.h"

/**
 * char *_strcat - joins two strings
 * @dest: destination parameter
 * @src: source parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int counter = 0;
	
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[counter] != '\0')
	{
		dest[count] = src[counter];
		count++;
		counter++;
	}

	return (dest);
}
