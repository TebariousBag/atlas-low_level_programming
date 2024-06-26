#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: parameter
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%i, ", n);
		printf("%i\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%i, ", n);
		printf("%i\n", 98);
	}
}
