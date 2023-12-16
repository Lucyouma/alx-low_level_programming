#include "main.h"

/**
  * _strchr - Entry point, locate string chacter
  *
  * @s: Function
  *
  * @c: Function
  *
  * Return: 0 Always
  */
char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (0);
}
