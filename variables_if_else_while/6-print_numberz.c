#include <stdio.h>
/**
 * main - Numberz
 * Description: print single digit numbers of base 10 withou using variable char
 * Return: 0
 */

int main(void)
{
	int c = '0';

	while (c < 10)
	{
		putchar(c + 48);
		c++;
	}
	putchar('\n');
	return (0);
}
