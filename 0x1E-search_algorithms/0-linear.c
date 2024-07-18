#include "search_algos.h"

/**
 * linear_search - function searching for an array value
 * integers using the Linear search algorithm.
 * @array: the first element array pointer to search in.
 * @size: number of elements in array.
 * @value: searched value.
 *
 * If value is not present in array or if array is NULL return -1.
 *
 * Return: first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value) /* if (*(array + i) == value) */
			return (i);
	}
	return (-1);
}
