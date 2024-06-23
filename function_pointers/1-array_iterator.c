#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of array
 * @array: the array
 * @size: the size
 * @action: the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cycle;

	if (!array || !action)	/*check to see if fails then return*/
	{
		return;
	}
	for (cycle = 0; cycle < size; cycle++)	/*cycle through the array*/
	{
		action(array[cycle]);	/*execute each element in array*/
	}
}
