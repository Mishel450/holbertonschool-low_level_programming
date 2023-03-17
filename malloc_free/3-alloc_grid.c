#include "main.h"
#include <string.h>
/**
 *
 *
 *
 *
 */
int **alloc_grid(int width, int height);
{
	if (width > 0 && height > 0)
	{
		int **s = malloc((int) * height + 1)((int) * width + 1);
		int i = 0;
		int j = 0;
		for ( ; i < heighy; i++)
		{
			for ( ; j < width; j++)
			{
				s[i][j] = 0;
			}
			j = 0;
		}
	}
	return (s);
}
