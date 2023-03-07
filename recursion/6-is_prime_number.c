#include "main.h"
int mainOne(int j, int i, int k)
{
 if (i * k == j)
	 return (0);
 if (i < j)
	 return (mainOne(j, (i + 1), k));
 if (i == j)
	 return (mainOne(j, 1, (k + 1)));
 else if (k == j)
	 return (1);
}
/**
 *
 *
 *
 */
int is_prime_number(int n)
{
	return (mainOne(n, 1, 1));
}
