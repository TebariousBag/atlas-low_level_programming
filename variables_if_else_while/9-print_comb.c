#include <stdio.h>
/**
 * main - main block
 * Description:
 * Return: 0
*/
int main(void)
{
	int z = 0;

	while (z <= 9)
	{
		putchar(48 + z);
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
