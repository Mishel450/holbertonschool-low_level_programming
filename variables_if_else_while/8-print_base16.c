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
for (ch = 48 ; ch <= 57 ; ch++)
{
putchar(ch);
}
for (ch2 = 97 ; ch2 <= 102 ; ch2++)
{
putchar(ch2);
}
putchar('\n');
return (0);
}
