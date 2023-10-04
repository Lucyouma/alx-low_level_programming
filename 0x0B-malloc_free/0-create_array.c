#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point, array size and char c assign craetion
 *
 * @size: array size
 * @c: assigning char
 *
 * Description: size of array craetion and char c assignment
 *
 * Return: pointer to array,if fail NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
