#include <stdio.h>
#include "main.h"

/**
 * main - Entry point, program printing names
 * followed by a new line
 *
 * @argc: arguments
 * @argv: arguments arrays
 *
 * Return:0 Always (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
