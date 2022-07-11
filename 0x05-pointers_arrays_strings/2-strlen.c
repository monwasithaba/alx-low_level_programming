#include "main.h"
#include <string.h>

/**
* _strlen -> function to get the ength of a string
* @s: string pointer to pass to this function
* Return: return the length of a string
*/
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (strlen(s));
}
