#include "variadic_functions.h"
/**
* print_strings - prints strings followed by newline
* @separator: what to be printed between strings
* @n: number of strings to be printed
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t;

	char *string;	/*what will store our string*/

	va_list mylist;	/*list to hold*/

	va_start(mylist, n);	/*start list*/

	for (t = 0; t < n; t++)	/*iterate through*/
	{
		string = va_arg(mylist, char *);
		if (!string)	/*if string is null then it equals nil*/
			string = "nil";
		if (separator != NULL && t > 0)
		/*if separator is not null and its greater than zero print separator*/
			printf("%s", separator);
		else	/*else print string*/
			printf("%s", string);
	}
	va_end(mylist); /*free mylist*/
	printf("\n");
}
