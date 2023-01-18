#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name
 * @f: function pointer
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
