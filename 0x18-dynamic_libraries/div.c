#include <stdio.h>
#include <stdlib.h>
#include <main.h>
void div(int a, int b, int *result) {

if (b == 0)
{

printf("Error: division by zero\n");
return;
}
*result = a / b;
}
