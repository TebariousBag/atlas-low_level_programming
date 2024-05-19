#include <stdio.h>

/**
 * main - print comb
 * Description: print all possible combo of single number
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c + 48);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
