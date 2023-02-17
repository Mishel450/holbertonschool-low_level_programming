#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int minFirst= 48;
int minSecond= 48;
int hoursFirst= 48;
int hoursSecond= 48;
int i;
int y;
for (y = 0 ; y <= 23 ; y++)
{
for (i = 0 ; i <= 59 ; i++)
  {
    _putchar(hoursFirst);
    _putchar(hoursSecond);
    _putchar(58);
    _putchar(minFirst);
    _putchar(minSecond);
    _putchar('\n');
    minSecond++;
    if (minSecond > 57)
      {
	minSecond = (minSecond - 9);
	minFirst++;
      }
}
hoursSecond++;
if (hoursSecond > 57)
{
hoursSecond = 48;
hoursFirst++;
}
 }
}
