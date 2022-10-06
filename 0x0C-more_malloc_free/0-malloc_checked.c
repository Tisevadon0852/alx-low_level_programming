#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked-allocates memory using malloc
 *@b: int type
 *Return: 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
