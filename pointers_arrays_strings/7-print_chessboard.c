#include "main.h"
#include <string.h>
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
		_putchar(*(a + i + j));
	}
}
}
