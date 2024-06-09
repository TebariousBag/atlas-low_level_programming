#include "main.h"
/**
 * 
 * 
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 1; count <= argc; count++)	/*start counting at 1*/
	{
		printf("%s\n", argv[count - 1]);	/*print argv count -1 because it starts at 0*/
	}
	return (0);
}