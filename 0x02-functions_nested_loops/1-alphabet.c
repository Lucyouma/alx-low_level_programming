#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Entry point (main)
 *
 * Description: This function prints alphabets in lower case from "a" to "z"
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
