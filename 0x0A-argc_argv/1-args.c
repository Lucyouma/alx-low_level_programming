#include <stdio.h>
#include "main.h"

/**
 * main - Entry point, number of arguments in program (passed)
 * followed by a new line
 *
 * @argc: arguments number
 * @argv: arguments arrays
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
