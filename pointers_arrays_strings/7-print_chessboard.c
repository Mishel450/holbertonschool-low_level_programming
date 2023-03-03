#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *
 *
 *
 */
void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 9; i++)
{
	for (j = 0; j < 9; j++)
	{
		printf("%d", a[i][j]);
	}
}
}
