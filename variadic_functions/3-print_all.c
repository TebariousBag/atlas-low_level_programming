#include "variadic_functions.h"
/**
 * print_all - prints all types
 * @format: list of types of arguments given to funct
 */

void print_all(const char * const format, ...)
{
	int t;
	char *str;
	char *sep = "";

	va_list mylist;

	va_start(mylist, format);

	if (format)
	{
		while(format[t])
		{
			switch (format[t])
			{
				case 'c':
					printf("%s%c", sep, va_arg(mylist, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(mylist, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(mylist, float));
					break;
				case 's':
					str = va_arg(mylist, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
				default:
					t++;
					continue;
			}
			sep = ", ";
			t++;
		}
	}
}