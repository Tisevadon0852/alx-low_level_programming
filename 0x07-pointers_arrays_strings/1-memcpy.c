#include "main.h"

/**
 * _memcpy - that copies memory area
 * @dest: pointer to char type
 * @src: pointer to char type
 * @n: size
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
