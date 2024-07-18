#include "search_algos.h"

/**
 * recursive_binary_search - Recursively seraching a value in a sorted array
 *                           of integers using the Binary search algorithm.
 *
 * @array: The first element search array pointer.
 * @start: The starting index of serached subarray.
 * @end: The ending index of the searched subarray.
 * @value: The searched value.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index the value location.
 *
 * Description: Prints the sercahed subarray before each recursive call.
 */
int recursive_binary_search(int *array, size_t start, size_t end, int value)
{
    size_t half = (start + end) / 2;
    size_t i;

    if (array == NULL || start > end)
        return -1;

    printf("Searching in array");
    for (i = start; i <= end; i++)
        printf("%s %d", (i == start) ? ":" : ",", array[i]);
    printf("\n");

    if (value == array[half])
    {
        if (half > start)
            return recursive_binary_search(array, start, half - 1, value);
        return (int)half;
    }
    else if (value < array[half])
        return recursive_binary_search(array, start, half - 1, value);
    else
        return recursive_binary_search(array, half + 1, end, value);
}

/**
 * advanced_binary - Calls recursive_binary_search to return the index of a number.
 *
 * @array: The first element pointer of the search array.
 * @size: The elements numbers in the array.
 * @value: The searched value.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index value location.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return recursive_binary_search(array, 0, size - 1, value);
}
