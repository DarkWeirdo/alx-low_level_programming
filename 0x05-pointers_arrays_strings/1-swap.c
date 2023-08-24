#include "main.h"
/**
*swap_int - swaps the values of 2 integers
*@a: an integer for the swap
*@b: an integer for the swap
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
