#include "main.h"

/**
  * _strncat  - Entry point (main function)
  *
  * @dest: string parameter
  *
  * @src: string parameter
  *
  * @n: string parammeter
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
	a++;
	}
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
