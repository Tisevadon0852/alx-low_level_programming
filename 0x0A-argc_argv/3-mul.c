#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiply two numbers
 * @argc: type int
 * @argv: pointer to char type
 * Return: Return 0 if successful
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);
	return (0);
}
