#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: parameter
 * Return: if no numbers in string then 0
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
	while (*s != '\0' && ((*s == '+' || *s == ' ' || *s == '-')))
	{
		s++;
	}
	while (*s != '\0' && ((*s < '0') || (*s > '9')))
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
