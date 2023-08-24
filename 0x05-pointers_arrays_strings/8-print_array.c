#include"main.h"
/**
* print_array - function to print number of elements of an array of integers
* @a: array input
* @n: number of elements to be printed
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
