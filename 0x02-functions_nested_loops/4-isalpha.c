#include "main.h"
/**
 * _isalpha - Entry point alphabetic order checks
 *
 * @c: alpabet to check for
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
