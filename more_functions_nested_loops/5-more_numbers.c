#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int num;
	int lines;

	for (lines = 1; lines < 10; lines++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
