#include "main.h"

/**
 * flip_bits - changed bit num counting
 * getting from one num to the other
 * @n: num one
 * @m: num two
 *
 * Return: changed bit number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
