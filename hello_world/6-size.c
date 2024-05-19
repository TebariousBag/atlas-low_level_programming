#include <stdio.h>
/**
 * main - prints various size types depending on the computer it is run on
 * Return: 0
 **/

	int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %zu byte\n", sizeof(c));

	return (0);
}
