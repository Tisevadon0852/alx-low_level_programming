#include "main.h"

/**
 * 2-print_alphabet_x10.c - Function to print lower case alphabets 10x
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
