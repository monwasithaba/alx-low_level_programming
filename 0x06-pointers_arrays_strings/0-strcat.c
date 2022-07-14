#include "main.h"
#include <string.h>

/**
*_strcat -> this is a function strcat
*@dest: first param
*@src: first param
*Return a string
*/
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != 0; x++)
	{
		for (y = 0; src[y] != 0; y++)
		{
			dest[x] = src[y]
			x++;
		}
	}
	dest[x] = '\0';
	return (dest);
}
