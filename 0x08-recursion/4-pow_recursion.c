#include "main.h"

/**
 * _pow_recursion - returns x value to power y
 *
 * @x: value to raise
 *
 * @y: power
 *
 * Return: power value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
