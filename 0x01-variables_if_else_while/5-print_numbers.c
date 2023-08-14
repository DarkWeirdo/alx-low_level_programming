#include <stdio.h>
/**
*main - main function of task 5 program
*Return: 0 as requested
*/
int main(void)
{
int num = 0;
while (num >= 0 && num <= 9)
{
printf("%d", num);
num++;
}
putchar('\n');
return (0);
}
