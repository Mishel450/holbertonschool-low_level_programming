#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - is the function thats search for a matches.
 * @array: is the array.
 * @size: is the size of the array.
 * @cmp: is the function thats points to int_index.
 * Return: i or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size > 0 && array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	else
	{
		return (-1);
	}
return (0);
}
