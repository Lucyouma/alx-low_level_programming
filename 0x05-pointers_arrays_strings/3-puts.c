#include "main.h"
/**
 * _puts - string followed by a new line
 * @str: parameter (function)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	putchar (str[i]);
	putchar ('\n');
}
