#include <stdlib.h>
#include "main.h"

/**
 * *_memset - constant byte memory fill
 * @s: filled memory area
 * @b: char
 * @n: copying b number of times
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - memory array allocation
 * @nmemb: array number of elements
 * @size: each element size
 *
 * Return: memory allocated pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

