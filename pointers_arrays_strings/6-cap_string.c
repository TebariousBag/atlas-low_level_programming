#include "main.h"

/**
 * cap_string - capitalizes all words in string
 * @taco: parameter
 * Return: taco
 */

char *cap_string(char *taco)
{
	int count = 0;

	while (taco[count] != '\0')
	{
		while (!(taco[count] >= 'a' && taco[count] <= 'z')
			count++;
		if (taco[count - 1] == ' ' ||
			taco[count - 1] == '\t' ||
			taco[count - 1] == '\n' ||
			taco[count - 1] == ',' ||
			taco[count - 1] == ';' ||
			taco[count - 1] == '.' ||
			taco[count - 1] == '!' ||
			taco[count - 1] == '?' ||
			taco[count - 1] == '"' ||
			taco[count - 1] == '(' ||
			taco[count - 1] == ')' ||
			taco[count - 1] == '{' ||
			taco[count - 1] == '}' ||
			count == 0)
			
			taco[count] -= 32;

			count++;
	}

	return (taco);
}
