#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point prints putchar followed by a new line
 *
 * Return: Always 0
 */
int _putchar(char *c)
{

	write(1, c, sizeof(c) - 1);
	return (0);
}
