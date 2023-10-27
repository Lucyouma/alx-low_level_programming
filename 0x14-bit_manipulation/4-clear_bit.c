#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - It sets the bit t value to 0 at a particular index
 * @n: variable
 * @index: index
 * Return: if success 1,if error -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
