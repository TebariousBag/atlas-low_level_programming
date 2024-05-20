#include "main.h"

/**
 * print_sign - checks if positive negative
 * @n: the parameter
 * Return: 1 if positive, 0 if 0, or -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
