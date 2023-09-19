#include "main.h"
/**
 * _strlen - return string length
 * @s: parameter in question
 * Return: String length
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	count++;
	return (count);
}
