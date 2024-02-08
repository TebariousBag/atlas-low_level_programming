#include "main.h"
/**
* _strcat - function joins tw strings
* @dest: parameter 1
* @src: parameter 2
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

	dest[count] = '\0';
	return (dest);
}
