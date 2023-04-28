#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int h = 0;

	for (i = 0; i < size; i++)
	{
		j += a[i][i];
	}
	i = 0;
	for (i = size; i > 0; i--)
	{
		h += a[i][i]
	}
	printf("%d, %d", j, h);
}
