#include "main.h"
/**
 * string_toupper - Entry
 * change all cases (lower to upper)
 *
 * @n: Input of the string
 *
 * Return: n
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
	if (n[i] >= 'a' && n[i] <= 'z')
	n[i] = n[i] - 32;
	i++;
	}
	return (n);
}
