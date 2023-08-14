#include <stdio.h>
/**
*main - main function of task 4 program
*Return: 0 as requested
*/
int main(void)
{
char letter = 'a';
while (letter >= 'a' && letter <= 'z')
{
printf("%c", letter);
letter++;
}
return (0);
}
