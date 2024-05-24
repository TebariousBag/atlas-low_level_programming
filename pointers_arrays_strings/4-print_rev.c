#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: parameter
 * Return: void
 */

void print_rev(char *s)
{
	index = 0;
	count = 0;

	while (s[index] != '\0')
	{
		count++;

		while (s[count] != 0)
		{
			_putchar(s[count]);
			count--;
		}
	}
	_putchar('\n');
}
