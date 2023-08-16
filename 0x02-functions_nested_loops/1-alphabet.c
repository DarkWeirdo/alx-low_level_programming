#include "main.h"
#include <unistd.h>
/**
*main - main function of task
*Return: 0 as requested
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter >= 'a' && letter <= 'z')
{
_putchar(letter);
++letter;
}
}
