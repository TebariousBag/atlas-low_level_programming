#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: parameter array
 * @n: parameter number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int count = 0;
	int counter = n - 1;
	int temp;

	while (count < counter)
	{
		temp = a[count];
		a[count] = a[counter];
		a[counter] = temp;
		count++;
		counter--;
	}

}
