#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer char type 1st argument
 * @s2: pointer char type 2nd argument
 * Return: 0 for same string, others if not the same
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
