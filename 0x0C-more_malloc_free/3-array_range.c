#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int type
 * @max: int type
 *
 * Return: NULL or pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
