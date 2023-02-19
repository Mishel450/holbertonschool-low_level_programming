#include <stdio.h>
#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
  int multiply= '0';
  int number;
  int result=number*multiply;
  int i;
for (i = 0 ; i <= 9 ; i++)
  {
    for (number = 48 ; number <= 57 ; number++)
      {
	_putchar(result);
	_putchar(44);
	_putchar(32);
      }
    multiply++;
  }
