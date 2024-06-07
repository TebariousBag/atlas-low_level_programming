#include "main.h"
/**
 * helper - helper function
 * @n: the number given
 * @i: parameter to check if prime
 * Return: 1 or 0
 */

int helper(int n, int i)	/* helper function*/
{
	if (i == n / 2)	/* if i is eqaul to n/2 its prime*/
	{
		return (1);
	}
	if (n % i == 0 || n == 1)	/*if the remainder of n is 0 than it is not prime*/
								/*if n is equal to 1 its not prime*/
	{
		return (0);
	}
	return (helper(n, i + 1));	/* increases i by 1*/

}

#include "main.h"
/**
 * is_prime_number - checks if prime number
 * @n: the number
 * Return: helper
 */

int is_prime_number(int n)
{
	return (helper(n, 2));	/* gives helper i the value of 2*/
}
