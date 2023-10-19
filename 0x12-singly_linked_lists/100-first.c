#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - sentence printing before the main
 * function execution
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
