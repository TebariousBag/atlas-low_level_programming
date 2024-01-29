#include "main.h"
/**
 * puts2 - function that prints every other character of the string
 * @str: the string
 * Return: void
 */

void puts2(char *str)

{
	int index;

	for (index = 0 ; str[index] != '\0' ; index++)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
	}
	_putchar('\n');
}
