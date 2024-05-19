#include <stdio.h>
/**
 * main - alphabet soup
 * Description: print lowercase alphabet except q and e
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z' && !(c == 'q' || c == 'e'))
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);

}
