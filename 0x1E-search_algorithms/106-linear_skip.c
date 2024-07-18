#include "search_algos.h"

/**
 * linear_skip - Searching for a skip list value.
 *
 * @list: Head of the skip list pointer.
 * @value: Searched value.
 *
 * Return: Node pointer containing the value, or NULL if not found
 *         or if the list is NULL.
 *
 * Description: Prints the checked values and their list indices.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *next;

    if (list == NULL)
        return NULL;

    current = list;

    while (current)
    {
        next = current->express;
        printf("Value checked at index [%d] = [%d]\n", (int)next->index, next->n);

        if (next->n >= value || next->express == NULL)
        {
            printf("Value found between indexes [%d] and [%d]\n",
                   (int)current->index, (int)next->index);

            while (current)
            {
                printf("Value checked at index [%d] = [%d]\n",
                       (int)current->index, current->n);

                if (current->n == value)
                    return current;

                current = current->next;
            }

            break;
        }

        current = next;
    }

    return NULL;
}
