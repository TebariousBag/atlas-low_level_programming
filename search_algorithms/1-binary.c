#include "search_algos.h"

/**
 * binary_search - search for value in sorted array of ints
 * @array: array
 * @size: size of array
 * @value: the value to search for
 * Return: the value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t middle = 0;
	size_t right = size - 1; /*end of array - 1 since count starts at 0*/
	size_t i = 0;

	if (array != NULL)
	{
		while (left <= right)
		{
			middle = (left + right) / 2; /*find the middle*/
			printf("Searching in array: ");
			for (i = left; i < right; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[middle] < value) /*see if we need to search right*/
			{
				left = middle + 1;
			}
			else if (array[middle] > value) /*if we need to search left*/
			{
				right = middle - 1;
			}
			else /*its the middle*/
			{
				return (middle);
			}
		}
	}
	return (-1); /*value not found*/
}
