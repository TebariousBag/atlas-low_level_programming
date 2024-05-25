#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameters
 * Return: void
 */

void rev_string(char *s)
{
	int index = 0;
	int count = 0;

	while (s[index] != '\0')
	{
		_putchar(s[index]);
		index++;
		count++;
	}

	index --;
	count--;
	_putchar('\n');

	while (s[count] >= 0)
	{
		_putchar(s[index]);
		index--;
		count--;
	}
	_putchar('\n');
}
