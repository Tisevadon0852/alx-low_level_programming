#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: address to memory block
 * @b: char type
 * @n: int type
 * Return: pointer to destination
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
