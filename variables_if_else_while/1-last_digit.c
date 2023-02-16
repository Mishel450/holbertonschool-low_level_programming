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
	int finalN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
finalN = n % 10;
if (finalN == 0)
{
printf("Last digit of %d is %d and is 0\n", n, finalN);
}
if (finalN > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, finalN);
}
if (finalN < 6 && finalN != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, finalN);
}
return (0);
}
