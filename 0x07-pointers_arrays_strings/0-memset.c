#include "main.h"

/**
  * _memset - Entry point,fill the memory
  * with a constant byte
  *
  * @s: The value used to fill the memory
  *
  * @b: Function variable
  *
  * @n: Function variable
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	s[a] = b;
	return (s);
}
