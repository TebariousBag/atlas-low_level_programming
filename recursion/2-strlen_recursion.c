#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count;

	if (*s == '\0')
	{
		return (0);
	}
	count = _strlen_recursion(s + 1);
	return (count + 1);
}
