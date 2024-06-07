#include "main.h"
/**
 * _sqrt_recursion - returns square root
 * @n: the number
 * Return: result or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)	/* base case for less than 0*/
	{
		return (-1);
	}
	if (n == 0 || n == 1)	/* base case if equal to 0 or 1*/
	{
		return (n);
	}
	int divided = n / 2;	/* divide n by 2*/
	if (_sqrt_recursion(divided) * _sqrt_recursion(divided) == n)	/* if n divided times itself = itself */
	{
	return (_sqrt_recursion(divided);)
	}
}
