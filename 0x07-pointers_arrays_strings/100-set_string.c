nclude "main.h"
/**
 * set_string - set the value of the pointer to a char
 * @s: pointer to pointer
 * @to: pointer to char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

