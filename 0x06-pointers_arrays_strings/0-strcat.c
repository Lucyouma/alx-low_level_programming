#include "main.h"

/**
 * *_strcat - two strings concatenation function
 * @dest:parameter in question
 * @src: parameter in question
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
	ptr++;
	}
	while (*src != '\0)
	{
	*ptr = *src;
	ptr++;
	src++;
	}
	*ptr = '\0';
	return dest;

}
