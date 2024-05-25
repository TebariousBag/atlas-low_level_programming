#include "main.h"
/**
 * rev_string - reverses a string
 * @s: parameters
 * Return: void
 */
void rev_string(char *s)
{
	int index;
	int count = 0;

	for (index = 0; s[index] != '\0'; index++)
		count++;

	for (index = 0; index < count / 2; index++)
	{
		char temp;

		temp = s[index];

		s[index] = s[count - 1 - index];
		s[count - 1 - index] = temp;
	}
}
