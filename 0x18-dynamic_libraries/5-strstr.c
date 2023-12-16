#include "main.h"

/**
  * _strstr - Entry point, substring location
  *
  * @needle: Variable function
  *
  * @haystack: function
  *
  * Return: 0 Always
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *I = haystack;
	char *P = needle;

	while (*I == *P && *P != '\0')
	{
	I++;
	P++;
	}
	if (*P == '\0')
	return (haystack);
	}
	return (0);
}
