#include "main.h"
/**
 * _puts - function prints a string and new line
 * @str: parameter that contains the text
 * Return: void
 */

void _puts(char *str)

{
	int index;

	for (index = 0 ; str[index] != '\0' ; index++)
		_putchar(str[index]);
	_putchar('\n');
}
