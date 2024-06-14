#include "main.h"
#include <stdlib.h>
/**
 * strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string
 * Return: pointer to new string or null
 */

char *_strdup(char *str)
{
	char *copy;
	int len = 0;
	int index;

	if (str == NULL)	/* if its null return null*/
	{
		return (NULL);
	}
	while (str[len] != '\0')	/*figure out the length*/
	{
		len++;
	}
	copy = malloc(sizeof(char) * (len + 1));	/*making memory for the copy*/
	if (copy == NULL)	/*if null then not enough memory*/
	{
	return (NULL);
	}
	for (index = 0; index < len; index++)	/*copy each element to new string*/
	{
		copy[index] = str[index];
	}
	copy[len] = '\0';	/*add the null to the end*/
	return (copy);
}
