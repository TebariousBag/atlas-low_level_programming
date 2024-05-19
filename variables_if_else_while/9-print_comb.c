#include <stdio.h>

/**
 * main - print comb
 * Description: print all possible combo of single number
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
