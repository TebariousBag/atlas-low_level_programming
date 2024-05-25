#include "main.h"
/**
 * rev_string - reverses a string
 * @s: parameters
 * Return: void
 */
void rev_string(char *s)
{
	int index;
	int count;

	for (index = 0; s[index] != '\0'; index++)
		count++;

	for (index = count -1; index >= 0; indexx--)
		_putchar(s[index]);
		_putchar('\n');
}
