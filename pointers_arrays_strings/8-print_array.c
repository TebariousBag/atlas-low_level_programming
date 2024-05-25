#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: parameter 1
 * @n: parameter 2
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
	}
	printf("\n");
}
