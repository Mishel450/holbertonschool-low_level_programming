#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * reverse_array - check the code.
 * @a: is a array.
 * @n: is a number.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;
int k = 0;
int j1[30];
int j2[30];
for (i = n - 1; i >= 0 ; i--)
{
j2[k] = a[i];
k++;
}
for (i = 1; i <= n; i++)
{
j1[i] = j2[i];
}
for (i = 1; i <= n; i++)
{
a[i] = j1[i];
}
}
