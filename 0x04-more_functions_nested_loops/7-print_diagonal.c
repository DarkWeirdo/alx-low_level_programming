#include "main.h"
/**
* print_diagonal - prints a diagonal
* @n: number of lines the will be printed before the diagonal
*/
void print_diagonal(int n)
{
int postn;
if (n <= 0)
_putchar('\n');
else
{
for (postn = 1; postn <= n; postn++)
{
_putchar(92);
}
_putchar('\n');
}
}
