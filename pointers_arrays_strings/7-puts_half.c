#include "main.h"

/**
 * puts_half - prints half a string then new line
 * @str: parameter
 * Return: void
 */

void puts_half(char *str)
{
	int index;
	int temp;
	int count;

	for (index = 0; str[index] != '\0'; index++)
		count++;
	temp = (count - 1) / 2;

	for (index = temp; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}
