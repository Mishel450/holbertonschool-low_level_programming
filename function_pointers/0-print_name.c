#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function that prints the name.
 * @name: is the name.
 * @f: is a pointer to the funcion.
 * Return: noting.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL)
	(f)(name);
}
