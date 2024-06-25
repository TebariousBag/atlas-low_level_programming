#include <stdio.h>
#include <stdlib.h>

/**
 * main - sum of positive numbers
 * @argc: number of args
 * @argv: array of arg
 * Return: the sum, 0, or 1
 */

int main(int argc, char *argv[])
{
	int a;
	int n;
	int sum = 0;

	for (a = 1; a < argc; a++)	/*scroll through argc*/
	{
		for (n = 0; argv[a][n]; n++)	/*scroll through argv*/
		{
			if (argv[a][n] < '0' || argv[a][n] > '9')	/*can't be a negative*/
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);	/*turn string to int, and add all argv to sum*/
	}
	printf("%d\n", sum);

	return (0);
}
