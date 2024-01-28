#include "main.h"
/**
 * swap_int - function swaps the values of a and b
 * @a: parameter 1
 * @b: parameter 2
 * Return: void
 */

void swap_int(int *a, int *b)

{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
