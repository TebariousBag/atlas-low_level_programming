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

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of long int: %zu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(ll));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));

	return (0);
}
