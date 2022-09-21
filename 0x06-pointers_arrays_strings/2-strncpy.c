#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: char type pointer 1st argument
 * @src: char type pointer 2nd argument
 * @n: int type 3rd argument
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
