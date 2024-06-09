#include "main.h"
/**
 * main - multiplies 2 numbers
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0
 */

int main(int argc; char *argv[])
{
	int multiplied = argv[1] * argv[2];
	if (argc != 3)
	{
		printf("Error\n")
		return (1);
	}
	printf("%d\n", multiplied);
	return (0);

}
