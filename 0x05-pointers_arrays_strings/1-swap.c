#include "main.h"

/**
 * swap_int - swaps two integers values
 * @a: first value function
 * @b: second value function
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
