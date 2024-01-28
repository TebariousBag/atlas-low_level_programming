#include "main.h"
/**
 * _puts(char *str) - function prints a string and new line to stdout
 * @str: parameter
 * Return: void
 */

void _puts(char *str)

{
	int index;

	for (index = 0 ; str[index] != '\0' ; index++)
		_putchar(str[index]);
	_putchar('\n');
}
