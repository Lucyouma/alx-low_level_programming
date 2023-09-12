#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point prints putchar followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char str[] = "_putchar\n";

	write(1, str, sizeof(str) - 1);
	return (0);
}
