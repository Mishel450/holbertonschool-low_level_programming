#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
char ch;
char ch2;
char listCH[53];
int i;
 for (ch = 'a' ; ch <= 'z' ; ch++)
{
  listCH += ch;
}
for (ch2 = 'A' ; ch <= 'Z' ; ch++)
{
  listCH =+ ch2;
}
 for (i=0; i<53; i++)
   {
     putchar(listCH[i]);
   }
 putchar('\n');
return (0);
}
