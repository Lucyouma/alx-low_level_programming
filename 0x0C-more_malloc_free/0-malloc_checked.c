#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked – Entry point,
 * malloc memory allocation
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
