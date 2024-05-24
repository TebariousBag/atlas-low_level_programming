#include "main.h"

/**
 * swap_int - swap value of two ints
 * @a: parameter 1
 * @b: parameter 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int valholder;

	valholder = *a;
	*a = *b;
	*b = valholder;
}
