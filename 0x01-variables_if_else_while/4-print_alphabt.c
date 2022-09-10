#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
  *main - Entry point
  *Return: Always 0 (Suceess)
  */

int main(void)
{
	int az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
		{
			putchar(az);
		}
	}
	putchar('\n');

	return (0);
}
