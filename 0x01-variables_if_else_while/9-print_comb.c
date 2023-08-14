#include <stdio.h>
/**
*main - main function of task 6 program
*Return: 0 as requested
*/
int main(void)
{
int num = 0;
while (num >= 0 && num <= 9)
{
putchar('0' + num);
putchar(',');
putchar(' ');
num++;
}
putchar('\n');
return (0);
}
