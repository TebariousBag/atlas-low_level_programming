#include "main.h"
/**
* _strlen - finds the length of the string
* @s: the string
* Return: length of string
*/

int _strlen(char *s)

{
	int index;
	int counter = 0;

	for (index = 0 ; s[index] != '\0' ; index++)
		counter++;
	return (counter);
}
