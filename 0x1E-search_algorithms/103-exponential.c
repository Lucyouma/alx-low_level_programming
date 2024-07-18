#include "search_algos.h"

/**
 * _binary_search - Searches for a value in a sorted array of integers
 *                  using binary search.
 *
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (array == NULL)
        return -1;

    while (right >= left)
    {
        printf("Searching in array: ");
        for (size_t i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[right]);

        mid = left + (right - left) / 2;
        if (array[mid] == value)
            return mid;
        else if (array[mid] > value)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using exponential search.
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t right;

    if (array == NULL)
        return -1;

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    right = (bound < size) ? bound : size - 1;
    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, right);
    return _binary_search(array, bound / 2, right, value);
}
