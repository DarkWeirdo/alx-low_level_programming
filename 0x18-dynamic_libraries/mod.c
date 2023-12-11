#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int mod(int a, int b)
{

if (b == 0)
{

printf("Error: modulo by zero\n");

return (1);

}

return (a % b);

}
