#include <stdio.h>
/**
*main - main function of task 5 program
*Return: 0 as requested
*/
int main(void)
{
int num = 0;
while (num >= 0 && num <= 15)
{
putchar('0' + num);
num++;
}
char letter = 'a';
while (letter >= 'a' && letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
