#include "main.h"

/**
 * _isalpha - check for alphabetic charater
 * @c: the parameter
 * Return: 1 if it is true or 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
