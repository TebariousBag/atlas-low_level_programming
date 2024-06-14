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
	int totallen = 0;
	int s1len = 0;
	int s2len = 0;
	int index;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[s1len] != '\0')
	{
		s1len++;
	}
	while (s2[s2len] != '\0')
	{
		s2len++;
	}
	totallen = s1len + s2len + 1;

	combined = malloc(sizeof(char) * totallen);
	if (combined == NULL)
	{
		return (NULL);
	}
	for (index = 0; index <= s1len; index++)
	{
		combined[index] = s1[index];
	}
	for (index = 0; index <= s2len; index++)
	{
		combined[s1len + index] = s2[index];
	}
	return (combined);
}
