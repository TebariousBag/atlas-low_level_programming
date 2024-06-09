#include "main.h"
/**
*main - prints arguments
*@argc: parameter 1
*@argv: parameter 2
*Return: 0
*/

int main(int argc, char *argv[])
{
	int count;

	for (count = 1; count <= argc; count++)	/*start counting at 1*/
	{
		printf("%s\n", argv[count - 1]);	/*count -1 so it starts at 0*/
	}
	return (0);
}
