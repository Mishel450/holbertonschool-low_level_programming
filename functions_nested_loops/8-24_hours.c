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
_putchar(hoursFirst);
_putchar(hoursSecond);
hoursSecond++;
if (hoursSecond > 57)
{
hoursSecond = 48;
hoursFirst++;
}
 _putchar(58);
for (i = 0 ; y <= 59 ; i++)
  {
    _putchar(minFirst);
    _putchar(minSecond);
    minSecond++;
    if (minSecond > 57)
      {
	minSecond = 48;
	minFirst++;
      }
}
_putchar('n');
 }
}
