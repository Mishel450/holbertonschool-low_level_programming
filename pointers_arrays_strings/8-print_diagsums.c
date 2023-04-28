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
	int *b = 0;
	int j = 0;
	int h = 0;
	int plus = 0;

	for (i = 0; i < size; i++)
	{
		plus = a[b][b];
		j += plus;
		b++;
	}
	i = 0;
	for (i = size; i > 0; i--)
	{
		plus = a[b][b];
		h += plus;
		b++;
	}
	printf("%d, %d", j, h);
}
