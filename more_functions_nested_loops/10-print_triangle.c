#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter
 * Return: void
 */

void print_triangle(int size)
{
	int count;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if
	{
		for (count = 0; count < size; count++)
		{
			for (hash = count; hash < count; hash++)
			{
				_putchar(' ');
			}
			for (hash = 1; hash <= count; hash++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}
