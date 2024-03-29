#include "main.h"
/**
 * _atoi - funtion converts strings to integers
 * @s: the string
 * Return: result
 */

int _atoi(char *s)
{

	int sign = 1;
	int result = 0;

	while (*s == ' ')
		s++;

	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
