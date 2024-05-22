#include "main.h"

/**
 * print_line - draws straight line in terminal
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
                        _putchar('\n');

	while (n > 0)
	{
		_putchar('_');
		n--;
		if (n = 0)
		{
		_putchar('\n');
		}
	}
}
