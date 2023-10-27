#include "main.h"

/**
 * set_bit - sets the value of a bit value setting at an index 1
 * @n: set number
 * @index: bit setting index
 *
 * Return: if success 1, or in case of na error -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
