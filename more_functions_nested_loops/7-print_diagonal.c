#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar(' ');
			n--;
			if (n = 0)
				_putchar('\\');
				_putchar('\n');
		}
	}
}
