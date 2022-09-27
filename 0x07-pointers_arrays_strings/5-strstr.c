#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: pointer to char type
 * @needle: pointer to char type
 * Return: pointer to the beginning of located substring or
 * Null if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *stack;
	char *pneedle;

	while (*haystack != '\0')
	{
		stack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if  (!*pneedle)
		{
			return (stack);
		}
		haystack = stack + 1;
	}
	return (0);
}
