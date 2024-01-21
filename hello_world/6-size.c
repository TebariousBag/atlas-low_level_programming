#include <stdio.h>
/**
 *
 */

int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %zu\n", sizeof(c));
	printf("Size of an int: %zu\n", sizeof(i));
	printf("Size of a long int: %zu\n", sizeof(l));
	printf("Size of a long long int: %zu\n", sizeof(ll));
	printf("Size of a float: %zu\n", sizeof(f));

	return (0);
}
