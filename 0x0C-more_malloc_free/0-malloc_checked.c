#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked – allocates memory using a malloc
 * @b: allocation number
 *
 * Return: allocated memory pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
