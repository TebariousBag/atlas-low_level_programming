#include "main.h"
/**
 * puts_half - function prints half the string
 * @str: the string
 * Return: void
 */

void puts_half(char *str)

{
	int index, n;
	int counter;

	for (index = 0 ; str[index] != '\0' ; index++)
		counter++;
	n = (counter - 1) / 2;
	for (index = n + 1 ; str[index] != '\0' ; index++)
		_putchar(str[index]);
	_putchar('\n');
}
