#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - combines two strings with a number of bytes
 * @s1: string 1
 * @s2: string 2
 * @n: the bytes
 * Return: pointer to new memory of s1+s2, or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combined;
	unsigned int lens1 = 0, lens2 = 0, lentotal = 0;
	unsigned int index;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[lens1])
	{
		lens1++;
	}
	while (s2[lens2] && lens2 < n)
	{
		lens2++;
	}
	lentotal = lens1 + lens2 + 1;
	combined = malloc(sizeof(char) * lentotal);
	if (combined == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < lens1; index++)
	{
		combined[lens1 + index] = s1[index];
	}
	for (index = 0; index < lens2; index++)
	{
		combined[lens2 + index] = s2[index];
	}
	combined[lentotal - 1] = '\0';
	return (combined);
}
