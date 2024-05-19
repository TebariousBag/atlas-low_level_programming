#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet and new line 10x
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
			_putchar('\n');
	}
}
