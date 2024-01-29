#include "main.h"
/**
 * rev_string - function that reverses the order of the string
 * @s: the string that will be reversed
 * Return: void
 */

void rev_string(char *s)

{
	int index;
	int counter = 0;

	for (index = 0 ; s[index] != '\0' ; index++)
		counter++;
	for (index = 0 ; index < counter / 2 ; index++)
	{
		char t;

		t = s[index];
		s[index] = s[counter -1 -index];
		s[counter - 1 - index] = t;
	}
}
