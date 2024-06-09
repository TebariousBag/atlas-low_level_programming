#include "main.h"
/**
 * 
 * 
 */

int main(int argc, char *argv[])
{
	(void)argv;	/*can I just void this?*/
	int num = argc -1;	/* argc prints its name first so we have to subtract 1*/
	printf("%d\n", num);

	return (0);
}
