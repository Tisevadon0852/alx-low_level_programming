#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
  *main - Entry point
  *Return: Always 0 (Success)
  */

int main(void)
{
	int az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar('\n');

	return (0);
}
