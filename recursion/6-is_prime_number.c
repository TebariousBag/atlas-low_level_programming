#include "main.h"
#include "math.h"
/**
 * is_prime_number - checks if prime number
 * @n: the number
 * Return: 1 or 0
 */

int helper(int n, int i)	/* helper function*/
{
	if (i == n / 2)	/* if i is greater than square root of n than its prime*/
	{
		return (1);
	}
	if (n % i == 0)	/*if the remainder of n is 0 than it is not prime*/
	{
		return (0);
	}
	return helper(n, i + 1);	/* increases i by 1*/

}
int is_prime_number(int n)
{
	return helper(n, 2);	/* gives helper i the value of 2*/
}
