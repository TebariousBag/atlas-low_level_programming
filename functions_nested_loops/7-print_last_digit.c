#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@i: parameter
 *Return: z
 */
int print_last_digit(int i)
{
	int z;

	z = i % 10;

	if (i < 0)
		z = -z;
	_putchar(z + '0');
	return (z);
}
