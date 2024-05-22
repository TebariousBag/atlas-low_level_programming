#include "main.h"

/**
 * print_most_numbers - prints 0-9 but not 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
	}
	_putchar('\n');
}
