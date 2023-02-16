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
if (ch != 101 && ch != 113)
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
