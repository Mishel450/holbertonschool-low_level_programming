#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void main(void)
{
int i;
for (i = 1 ; i <= 100 ; i++)
{
if ( i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
if ( i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
printf("%d", i);
}
}
