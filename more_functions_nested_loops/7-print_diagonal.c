#include "main.h"
/**
 *
 */

void print_diagonal(int n)

{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, t;

		for (i = 0 ; i < n ; i++)
		{
			for (t = 0 ; t <= i ; t++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
