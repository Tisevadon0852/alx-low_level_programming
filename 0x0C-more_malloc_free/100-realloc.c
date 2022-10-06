#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to int type
 * @old_size: int type
 * @new_size: int type
 *
 * Return: NULL or pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int added_mem, x;
	char *mem_block;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		added_mem = old_size;
	}
	else
	{
		added_mem = new_size;
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	mem_block = malloc(new_size);

	if (mem_block == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < added_mem; x++)
	{
		mem_block[x] = ((char *)ptr)[x];
	}
	free(ptr);
	return (mem_block);
}
