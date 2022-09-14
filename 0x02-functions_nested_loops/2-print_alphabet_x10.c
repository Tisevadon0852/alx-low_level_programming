#include "main.h"

/**
 *main - Entry point
 *Description: print the alphabet, in lowercase, followed by a new line
 *Return: 0
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
