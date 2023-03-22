#include "function_pointers.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size > 0)
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
