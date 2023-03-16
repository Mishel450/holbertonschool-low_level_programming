#include "main.h"
#include <string.h>
/**
 * *str_concat - check the code.
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 * Return: s3 or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = strlen(s1);
	int size2 = strlen(s2);
	int size3 = size1 + size2;
	int i;
	int j = 0;
	char *s3 = malloc(sizeof(char) * size3 + 1);

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size3; i++)
	{
		if (i < size1)
		{
			s3[i] = s1[i];
		}
		if (i > size1)
		{
			s3[i] = s2[j];
			j++;
		}
	}
	return (s3);
}
