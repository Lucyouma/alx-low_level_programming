#include "main.h"
/**
 * _isupper - Entry point uppercase letters
 * @c: checking character
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
