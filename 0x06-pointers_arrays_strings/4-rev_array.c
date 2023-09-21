#include "main.h"

/**
  * reverse_array - Entry point
  *
  * @a: string variable
  *
  * @n: string variable
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int g, h;

	for (g = 0; g < n--; g++)
	{
	h = a[g];
	a[g] = a[n];
	a[n] = h;
	}
}

