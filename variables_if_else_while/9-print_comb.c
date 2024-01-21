#include <stdio.h>
/*
 *
*/

int main(void)
{
	int z = 0;

	while (z <= 9)
	{
		putchar(z);
		if (z != 9)
		{
			putchar(',');
			putchar(' ');
		}
		z++;
	}
	putchar('\n');
	return (0);
}
