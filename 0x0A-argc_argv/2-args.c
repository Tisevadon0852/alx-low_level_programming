#include <stdio.h>

/**
 * main - Program that prints all arguments it receives
 * @argc: type int
 * @argv: pointer to char type
 * Return: Return 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
