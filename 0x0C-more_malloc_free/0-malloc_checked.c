#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function allocates memory using malloc.
 * @b: Parameter collects size of memory.
 * Return: Pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr  = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
