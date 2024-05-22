#include "main.h"

/**
 * print_line - draws straight line in terminal
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar(n);
		n--;
		_putchar('\n');

		if (n <= 0)
			_putchar('\n');
	}
}
