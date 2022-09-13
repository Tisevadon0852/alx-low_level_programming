#include "main.h"

/**
 * 1-alphabet.c - Function to print lower case alphabets
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
