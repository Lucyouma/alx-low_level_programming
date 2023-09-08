#include <stdio.h>
/**
 * main - Entry point function that prints single base 10 digits
 *
 * Return: 0 (sucess always)
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
