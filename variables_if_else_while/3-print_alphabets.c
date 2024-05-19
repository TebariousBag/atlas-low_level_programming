#include <stdio.h>
/**
 * main - alphaBET
 * Description: prints alphabet in lowercase athen uppercase
 * Return: 0
 */

int main(void)
{
	char l = 'a';
	char u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
