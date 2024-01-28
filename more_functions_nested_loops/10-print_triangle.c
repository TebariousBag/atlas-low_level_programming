#include "main.h"
/**
 * print_triangle - function prints a triangle
 * @size: parameter size of triangle
 * Return: void
 */

void print_triangle(int size)

{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, t;

		for (i = 1 ; i <= size; i++)
		{
			for (t = i ; t < size ; t++)
			{
				_putchar(' ');
			}
			for (t = 1; t <= i; t++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
