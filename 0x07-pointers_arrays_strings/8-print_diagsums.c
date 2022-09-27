#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to int type
 * @size: pointer to int type
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size)
	{
		sum1 += a[i + j];
		sum2 += a[i + (size - 1) - j];
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
