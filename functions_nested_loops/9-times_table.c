#include "main.h"

/**
 * times_table - times table of 9
 * Return: void
 */

void times_table(void)
{
	int row, column, result;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;
			if (column == 0)
			{
				_putchar(result + '0');
			}
			if (result < 10 && column != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else if (result >= 10)
			{
					_putchar(',');
					_putchar(' ');
					_putchar((column / 10) + '0');
					_putchar((column % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
