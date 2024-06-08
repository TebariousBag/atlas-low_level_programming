#include "main.h"

/**
 * _abs - computes absolute value of an int
 * @distance: parameter distance from 0
 * Return: is ether a - or a positive number
 */

int _abs(int distance)
{
	if (distance >= 0)
	{
		return (distance);
	}
	else if (distance < 0)
	{
		return (-distance);
	}
		return (0);
}
