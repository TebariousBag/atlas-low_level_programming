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
		int count;
		int spaces;

		for (count = 0; count < n; count++)
		{
			for (spaces = 0; spaces < count; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
