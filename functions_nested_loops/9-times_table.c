#include "main.h"
/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
  int multiply= 48;
  int number;
  int result;
  int i;
  for (i = 0 ; i <= 9 ; i++)
    {
      for (number = 48 ; number <= 57 ; number++)
	{
	  result = (number * multiply);
	    _putchar(result);
	    _putchar(44);
	    _putchar(' ');
	    if(result <= 9)
	      {
		_putchar(' ');
		multiply++;
	      }
_putchar('\n');
	    number++;
	}
    }
}
