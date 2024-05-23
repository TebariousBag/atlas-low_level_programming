#include "main.h"

/**
 * print_square - prints a square
 * @size: parameter
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int count;
		int hash;

		for (count =0; count < size; count++)
		{
			for (hash = 0; hash < count; hash++)
				_putchar('#');
			_putchar('\n');
		}
}
