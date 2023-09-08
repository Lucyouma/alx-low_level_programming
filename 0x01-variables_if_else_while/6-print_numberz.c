#include <stdio.h>
/**
 * main - Entry point function printing numbers with base of 10 begnning from 0
 *
 * Return: 0 always
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');

	return (0);
}
