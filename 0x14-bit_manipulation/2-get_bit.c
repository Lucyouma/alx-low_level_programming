#include"main.h"

/**
 * get_bit - returns an index bit value
 * @n: bits checking number
 * @index: bit checking index
 *
 * Return: the bit value, or in case of an error -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
