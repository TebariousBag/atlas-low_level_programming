#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char and initializes it with a spec char
 * @size: size of the array
 * @c: the char
 * Return: pointer to array or Null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < size; count++)
	{
		array[count] = c;
	}
	return (array);
}
