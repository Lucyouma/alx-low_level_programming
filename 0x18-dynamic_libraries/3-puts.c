#include "main.h"
/**
 * _puts - string followed by a new line
 * @str: parameter (function)
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	_putchar (s[i]);
	_putchar ('\n');
}
