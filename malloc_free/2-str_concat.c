#include "main.h"
#include <stdlib.h>
/**
 * str_concat - combines two strings
 * @s1: string 1
 * @s2: string 2
 * Return: the combined string or null
 */

char *str_concat(char *s1, char *s2)
{
	char *combined;
	int totallen;
	int count = 0;
	int index;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[count] != '\0' || s2[count] != '\0')
	{
		count++;
		totallen++;
	}
	combined = malloc(sizeof(char) * totallen +1);
	if (combined == NULL)
	{
		return (NULL);
	}
	for (count = 0; s1[count]; count++)
	{
		combined[index] = s1[count];
		index++;
	}
	for (count = 0; s2[count]; count++)
	{
		combined[index] = s2[count];
		index++;
	}
	return (combined);
}
