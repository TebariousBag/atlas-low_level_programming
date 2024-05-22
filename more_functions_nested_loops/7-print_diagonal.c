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
		int spaces

		while (n > 0)
		{
			n--;
			spaces++;
			 for (spaces; spaces > 0; spaces--)
				 _putchar(' ')
		}
			_putchar('\\');
			_putchar('\n');
	}
}
