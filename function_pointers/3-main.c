#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - main function
 * @argc: argument
 * @argv: an aaray of arguments
 * Return: a lot of returns
 */

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);
	int num;
	if (argc != 4)	/*if there aren't 4 files */
	{
		printf("Error\n");
		exit(98);
	}
	oprt = get_op_func(argv[2]);
	num = atoi(argv[3]);
	if ((*argv[2] == '%' || *argv[2] == '/') && num == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (!oprt)
	/*if operator isnt one we assigned*/
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	/*convert to integer*/
	return (0);
}
