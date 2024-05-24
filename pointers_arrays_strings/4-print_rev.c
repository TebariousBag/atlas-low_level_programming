#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: parameter
 * Return: void
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
	}
	index--;
	while (s[index] != 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
