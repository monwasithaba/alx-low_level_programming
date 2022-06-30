#include <stdio.h>

/**
*main - prints the size of various types
*Return 0 if executed correctly
*/

int main(void)
{
printnf("Size of a char: %d byte(s)\n", sizeof(char));
printnf("Size of a int: %d byte(s)\n", sizeof(int));
printnf("Size of a long int: %d byte(s)\n", sizeof(long int));
printnf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printnf("Size of a float: %d byte(s)\n", sizeof(float));
return(0);
}
