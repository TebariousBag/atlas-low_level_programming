#include "main.h"
/**
 * _pow_recursion - returns value of x to the power of y
 * @x: parameter 1
 * @y: parameter 2
 * Return: value or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)	/* base case no negative numbers*/
	{
		return (-1);
	}
	if (y == 0)	/* base case is 1*/
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1)); /* x to the power of y*/
	}

}
