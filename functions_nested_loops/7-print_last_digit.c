#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @p: parameter
 * Return: returns the value of last digit
 */

int print_last_digit(int p)
{
	int last;

	last = p % 10;

	if (p < 0)
		last = -last;
			_putchar(last + '0');
		return (last);

}
