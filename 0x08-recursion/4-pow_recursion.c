#include "main.h"
/**
*_pow_recursion - returns the value of x tot the power of y.
*@x: number
*@y: power
*
*Return: factorial of number
*-1 if x < 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (n * _pow_recursion(x, y - 1));
}
