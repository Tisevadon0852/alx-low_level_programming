#include "variadic_functions.h"

/**
 *print_strings - A function that prints string
 *@separator: String to be printed between strings
 *@n: Number of string passed to the function
 *
 *Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *str;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}

	printf("\n");
	va_end(string);
}
