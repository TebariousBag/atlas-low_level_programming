#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @taco: parameter
 *Return: taco
 */

char *string_toupper(char *)
{
	int count = 0;

	while (taco[count] != '\0')
	{
		if (taco[count] >= 'a' && taco[count] <= 'z')
			taco[count] = taco[count] - 32;
		count++;
	}
	
	return (taco);
}
