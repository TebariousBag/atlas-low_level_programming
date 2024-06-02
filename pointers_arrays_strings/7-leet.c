#include "main.h"

/**
 * leet - prints string in 1337
 * @taco: parameter
 * Return: taco
 */

char *leet(char *taco)
{
	int count;
	int counter;

	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (count = 0; taco[count] != '\0'; count++)
	{
		for (counter = 0; counter < 10; counter++)
		{
			if (taco[count] == str1[counter])
			{
				taco[count] = str2[counter];
			}
		}
	}

	return (taco);
}
