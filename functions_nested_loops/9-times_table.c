#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
  int multiply= 0;
  int number;
  int result;
  int i;
  int j;
  for (i = 0 ; i <= 9 ; i++)
    {
      for (number = 48 ; number <= 57 ; number++)
	{
	  result = (i + multiply);
	  multiply = result;  
	    _putchar(result + 48);
	    _putchar(44);
	    _putchar(' ');
	    if(result <= 9)
	      {
		_putchar(' ');
	      }
}
_putchar('\n');
multiply++;
    }
}
