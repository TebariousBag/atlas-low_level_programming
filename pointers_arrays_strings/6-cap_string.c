#include "main.h"

/**
 * cap_string - capitalizes all words in string
 * @taco: parameter
 * Return: taco
 */

char *cap_string(char *taco)
{
	int count;
	int counter;

	char spec[13] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	for (count = 0; taco[count] != '\0'; count++)
	{
		if (count == 0 && taco[count] >= 'a' && taco[count] <= 'z')
			taco[count] -= 32;

		for (counter = 0; counter < 13; counter++)
		{
			if (taco[count] == spec[counter])
			{
				if (taco[count + 1] >= 'a' && taco[count + 1] <= 'z')
				{
					taco[count + 1] -= 32;
				}
			}
		}
	}

	return (taco);
}
