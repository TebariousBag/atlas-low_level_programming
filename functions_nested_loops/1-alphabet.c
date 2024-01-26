#include "main.h"
/**
 * main - function prints a-z
 * Return: 0
 */

void print_alphabet(void)

{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
