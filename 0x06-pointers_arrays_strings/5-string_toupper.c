#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @s: pointer char type 1st argument
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
