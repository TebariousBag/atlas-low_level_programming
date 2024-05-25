#include "main.h"
/**
 * rev_string - reverses a string
 * @s: parameters
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int holder = 0;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	while (holder < count)
	{
		holder++;
		count--;
		rev = s[holder];
		s[holder] = s[count];
		s[count] = rev;
	}
}
