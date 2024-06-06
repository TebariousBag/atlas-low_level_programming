#include "main.h"
/**
* _print_rev_recursion - prints a string in reverse
* @s: string
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')	//base case
	{
		return;	//to exit
	}
		_print_rev_recursion(s + 1);	//loop through until end
		_putchar(*s);	//then start printing backwards
}
