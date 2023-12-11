#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
*
*/
void mod(int a, int b, int *result) {

if (b == 0)
{

printf("Error: modulo by zero\n");

return;

}

*result = a % b;

}
