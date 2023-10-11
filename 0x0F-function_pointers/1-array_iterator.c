#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - element array priting in a new line
 * @array: array
 * @size: printed element numbers
 * @action: printed pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
