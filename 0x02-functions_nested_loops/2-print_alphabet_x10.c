#include "main.h"

/**
 *Description - printing alphabet 10x
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	int x;

	for (i = 0; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
