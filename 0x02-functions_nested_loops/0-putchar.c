#include "main.h"

/**
 *main - Printing _putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ascii_value[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int a;

	for (a = 0; a <= 8; a++)
	{
		_putchar(ascii_value[a]);
	}
	_putchar('\n');
	return (0);
}
