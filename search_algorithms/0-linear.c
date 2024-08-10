#include "search_algos.h"

/**
 * linear_search - searches for a value in array of ints
 * @array: the array
 * @size: size of array
 * @value: the value to search for
 * Return: the value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i; /*index*/

	if (array == NULL) /*if no value*/
	{
		return (-1);
	}
	for (i = 0; i < size; i++) /*iterate through*/
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value) /*value found*/
			{
				return (i);
			}
	}

	return (-1);

}
