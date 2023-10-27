#include "main.h"

/**
 * get_endianness - endianness checking
 *
 * Return: if big endian 0, if little endian 1
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
