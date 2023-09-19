#include "main.h"

/**
 * print_array - print integer array elements (n)
 * followed by a new line
 *
 * @a: name of the array
 * @n: the array element numbers to be printed
 *
 * Return: inputs (a and n)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
