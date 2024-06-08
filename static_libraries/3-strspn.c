#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: parameter 1
 * @accept: parameter 2
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int count;
	int counter;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (counter = 0; s[count] != accept[counter]; counter++)
		{
			if (accept[counter] == '\0')
				return (count);
		}
	}
		return (0);
}
