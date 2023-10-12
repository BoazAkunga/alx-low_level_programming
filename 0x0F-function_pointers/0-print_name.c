#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints name using pointer 2 function
 * @name: string 2 add
 * @f: pointer 2 function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
