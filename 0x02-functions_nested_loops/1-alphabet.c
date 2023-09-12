#include "main.h"
#include <unistd.h>

/**
 * main - Entry point print alphabet (lower case)
 *
 * Return:0 Always
 */

void print_alphabet(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		_putchar(k);
		k++;

	}
	_putchar('\n');

}

