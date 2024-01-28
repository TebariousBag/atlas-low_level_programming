#include "main.h"
/**
 * print_rev - function prints the string in reverse
 * @s: tje text that is gonna print
 * Return: void
 */

void print_rev(char *s)

{
	int index;
	int counter = 0;

	for (index = 0 ; s[index] != '\0' ; index++)
		counter++;
	for (index = counter -1 ; index >= 0 ; index--)
		_putchar(s[index]);
	_putchar('\n');
}
