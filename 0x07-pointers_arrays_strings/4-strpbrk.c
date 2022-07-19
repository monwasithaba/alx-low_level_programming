#include "main.h"
#include <stdio.h>
/**
*_strbrk - prints the consecustive characters of the s1 that are in s2
*@s: source string
*@accept: searching string
*Return: new string
*/
char *_strbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
	}
	if (*(accept + i) == '\0')
	{
		return (s + i);
	}
	return (0);
}

