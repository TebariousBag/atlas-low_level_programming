#include "main.h"

/**
 * _islower - checks for lower case
 * Return: 1 if lowercase or 0 if not
 * @c: character we are checking
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
