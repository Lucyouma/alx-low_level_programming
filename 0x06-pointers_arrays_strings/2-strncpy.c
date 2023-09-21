#include "main.h"

/**
  * *_strncpy - Entry point
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
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}
	while (a < n)
	{
	dest[a] = ('\0');
	a++;
	}
	return (dest);
}
