#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive");
}
if (n = 0)
{
printf("%d is zero");
}   
if (n < 0)
{
printf("%d is negative");
}
return (0);
}
