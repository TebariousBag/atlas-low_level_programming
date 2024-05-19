#include <stdio.h>
/**
 * main - alphabet game
 * Description: prints alpha bet using putchar
 * Return: 0
 */

int main(void)
{
	char c = 'a';

		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		return (0);
}
