#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a char in a string
 * @s: pointer to char type
 * @c: char to be checked
 *
 * Return: pointer to the first occurence of c or null if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != c && s[i] != '\0'; i++)
	{
		;
	}

	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
