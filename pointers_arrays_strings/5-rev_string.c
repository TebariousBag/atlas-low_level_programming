#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameters
 * Return: void
 */

void rev_string(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	index --;
	while (s[index] >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
