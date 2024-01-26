#include "main.h"
/**
 *_islower - checks for lower case letter
*Return: either a 1 or a 0
*@c: parameter that we are checking
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
