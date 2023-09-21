#include "main.h"

/**
  * _strncat  - Entry point
  * a string copying function
  *
  * @src: parameter
  *
  * @dest: parameter
  *
  * @n: parammeter
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
