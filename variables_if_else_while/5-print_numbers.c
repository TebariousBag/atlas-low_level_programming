#include <stdio.h>
/**
 * main - main block
 * Description:
 * Return: 0
*/
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar (c);
		c++;
	}

	putchar ('\n');
	return (0);
}
