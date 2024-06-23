#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: the array we are searching
 * @size: size of array
 * @cmp: pointer to compare values
 * Return: index of first element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int cycle;

	if (!array || !cmp)
	{
		return (-1);
	}
	for (cycle = 0; cycle < size; cycle++)
	{
		if (cmp(array[cycle] == 0))
		{
			return (cycle);
		}
	}
	return (-1);
}
