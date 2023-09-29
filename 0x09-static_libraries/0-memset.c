#include "main.h"

/**
 * _memset - Entry point, memory fill with a value

 * @s:memory fill initial point
 * @b: the desired value
 * @n: changed bytes number
 *
 * Return: n bytes array change with new values
 */

char *_memset(char *s, char b, unsigned int n)

{
   	int a = 0;

   	for (; n > 0; a++)

   	{
	s[a] = b;
	n--;
   	}
   	return (s);
}
