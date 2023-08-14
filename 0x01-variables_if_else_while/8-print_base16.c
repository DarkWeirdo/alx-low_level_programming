#include <stdio.h>
/**
*main - main function of task 5 program
*Return: 0 as requested
*/
int main(void)
{
int num = 0;
char letter = 'a';
while (num >= 0 && num <= 9)
{
putchar('0' + num);
num++;
}
while (letter >= 'a' && letter <= 'f')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
