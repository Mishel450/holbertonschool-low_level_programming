#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int finalNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
   finalNumber=n%10;
  if (finalNumber == 0)
{
 printf("Last digit of %d is %d and is 0\n", n, finalNumber);
}
if (finalNumber > 5)
{
 printf("Last digit of %d is %d and is greater than 5\n", n, finalNumber);
}
if (finalNumber < 6 && finalNumber != 0)
{
 printf("Last digit of %d is %d and is less than 6 and not 0\n", n, finalNumber);
}
return (0);
}	
