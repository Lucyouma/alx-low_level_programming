#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - pointer to function printed names
 * @name: added string
 * @f: function pointer
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	f(name);
}
