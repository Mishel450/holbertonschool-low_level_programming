#include "main.h"
#include <string.h>
/**
 *
 *
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j = 0;
	unsigned int sizeS1 = strlen(s1);
	unsigned int sizeS2 = strlen(s2);
	unsigned int sizeAll = sizeS1 + n;
	unsigned int sizeS3 = sizeS1 + sizeS2;
	char *sAll = malloc(sizeof(char) * sizeAll + 1);
	char *s3 = malloc(sizeof(char) * sizeS3 + 1);

	if (s3 == NULL || sAll == NULL)
	{
		return (NULL);
	}
	if (n < sizeS2)
	{
		for (i = 0; i < sizeAll; i++)
	{
		if (i < sizeS1)
		{
			sAll[i] = s1[i];
		}
		else
		{
			sAll[i] = s2[j];
			j++;
		}
	}
	j = 0;
	return (sAll);
	}

	if (n > sizeS2)
	{
	for (i = 0; i < sizeS3; i++)
	{
		if (i < sizeS1)
		{
			s3[i] = s1[i];
		}
		else
		{
			s3[i] = s2[j];
			j++;
		}
	}
	j = 0;
	return (s3);
	}
return (0);
}
