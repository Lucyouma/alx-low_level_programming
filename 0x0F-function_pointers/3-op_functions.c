#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns two numbers sum
 * @a: Number one
 * @b: Number two
 *
 * Return: The a and b sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns two numbers difference
 * @a: Number one
 * @b: Number two
 *
 * Return: The a and b difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns two numbers product
 * @a: Number two
 * @b: Number two
 *
 * Return: The a and b product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: Number one
 * @b: Number two
 *
 * Return: The a and b quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns  two numbers divison remainder
 * @a: Number one
 * @b: Number two
 *
 * Return: The by b division remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
