#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The string to be appended upon
 * @src: The string to be appended to dest
 * @n: The number of bytes from src to be appended to dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
