#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @: memory to allocate
 * Return: pointer to allocated memory or normal process terminaton if error
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr =  malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
