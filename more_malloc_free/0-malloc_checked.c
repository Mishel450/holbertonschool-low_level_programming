#include "main.h"
/**
 *
 *
 *
 */
void main0ne(unsigned int **b)
{
	*b = malloc (sizeof (unsigned int));
}
int mainTwo(unsigned int b)
{
return (b);
}
void *malloc_checked(unsigned int b)
{
mainOne (&b);

mainTwo (b);
}
