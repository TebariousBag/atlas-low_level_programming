#include <stdio.h>

/**
 * main - print name of file it was compiled from, new line
 * Return: void
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	
	return (0);
}
