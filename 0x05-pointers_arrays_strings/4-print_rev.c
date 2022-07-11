#include "main.h"
#include <string.h>

/**
* print_rev -> printing a string in reverse
* @s: the stringto be printed in rev
*/
void print_rev(char *s)
{
	int n;

	n = strlen(s);
	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
