#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 97 ; ch <= 122 ; ch++)
{
if(ch != 101)
{
putchar(ch);
}
}  
return (0);
}
