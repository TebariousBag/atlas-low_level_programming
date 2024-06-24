#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: string to be printed
 * @n: number of ints to be passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int t;

	va_list mylist;	/*declaring the list to that will hold*/

	va_start(mylist, n);	/*telling to start holding list*/

	for (t = 0; t < n; t++)	/*iterate through list*/
	{
		if (t > 0 && !separator)
		/*if its not the first arg, and seperator not null*/
		{
			printf("%s", separator);	/*printe the sep*/
		printf("%d", va_arg(mylist, int));	/*otherwise print each arg*/
		}
	}
	va_end(mylist);	/*free up mylist*/
	_putchar('\n');
}