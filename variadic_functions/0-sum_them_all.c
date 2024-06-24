#include "variadic_functions.h"
/**
 * sum_them_all - returns sum of all parameters
 * @n: the arguments
 * Return: the sum total
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int t;	/*using this to iterate through for loop */
	int sum = 0;	/* using to sum up the numbers*/

	va_list mylist;	/*gonna hold the variable arguments*/

	va_start(mylist, n);	/*telling my list to start with n argument*/

	if (n == 0)
	{
		return (0);
	}
	for (t = 0; t < n; t++)	/*iterating through each arg*/
	{
		sum += va_arg(mylist, int);	/*receiving each arg and adding and saving to sum*/
	}
	va_end(mylist);	/*frees up mylist*/
	return (sum);	/*returns all the numbers added*/
}