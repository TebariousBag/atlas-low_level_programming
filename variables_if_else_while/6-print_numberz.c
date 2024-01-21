#include <stdio.h>
/*
 *
*/

int main(void)
{
	int c = '0';

	while(c <= 9)
	{
		putchar (48 + c);
		c++;
	}

	putchar ('\n');
	return (0);
}
