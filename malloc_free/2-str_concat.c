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

	if (s1 == NULL) /*if null empty string*/
	{
		s1 = "";
	}
	if (s2 == NULL)	/*if null empty string*/
	{
		s2 = "";
	}
	while (s1[s1len] != '\0')	/*find end of s1*/
	{
		s1len++;
	}
	while (s2[s2len] != '\0')	/*find end of s2*/
	{
		s2len++;
	}
	totallen = s1len + s2len + 1;	/*combine length s1+s2 and +1 for null*/

	combined = malloc(sizeof(char) * totallen);	/*memory for combine string*/
	if (combined == NULL)	/*if null not enough memory*/
	{
		return (NULL);
	}
	for (index = 0; index <= s1len; index++)	/*add s1*/
	{
		combined[index] = s1[index];
	}
	for (index = 0; index <= s2len; index++)	/*add s2*/
	{
		combined[s1len + index] = s2[index];
	}
	return (combined);	/*return the combined string*/
}
