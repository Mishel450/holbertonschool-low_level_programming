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
	int *i;
	int j = 0;
	int h = 0;
int plus = 0;

	for (i = 0; i < size; i++)
	{
		plus = a[i][i];
		j += plus;
	}
	i = 0;
	for (i = size; i > 0; i--)
	{
		plus = a[i][i];
		h += plus;
	}
	printf("%d, %d", j, h);
}
