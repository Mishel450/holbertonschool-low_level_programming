#include <stdio.h>
/**
 * main - check the code.
 * @argc: .
 * @argv: .
 * Reeturn: 0.
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i <= argc - 1; i++)
{
printf("%d", argv[i]);
}
return (0);
}
