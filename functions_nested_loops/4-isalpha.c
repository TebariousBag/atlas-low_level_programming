#include "main.h"
/**
 * _isalpha - function checks if its a letter
 * @c: the parameter
 * Return: 1 if true 0 if false
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
