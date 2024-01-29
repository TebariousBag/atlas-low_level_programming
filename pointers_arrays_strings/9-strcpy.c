#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * strcpy - function copies string to dest
 * @dest: destination
 * @src: is the source of the string
 * Return: the src string to dest
 */

char *_strcpy(char *dest, char *src)

{
	int index;

	strcpy(dest, src);

        for (index = 0 ; src[index] != '\0' ; index++)
                dest[index] = src[index];
        dest[index] = '\0';
        return (dest);
}
