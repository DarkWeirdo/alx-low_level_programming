#include <stdio.h>
/**
*main - main function of task 4 program
*Return: 0 as requested
*/
int main(void)
{
printf("Size of a char: %d byte(s)", sizeof(char));
printf("Size of an int: %d byte(s)", sizeof(int));
printf("Size of a long int: %ld byte(s)", sizeof(long int));
printf("Size of a long long int: %lld byte(s)", sizeof(long long int));
printf("Size of a float: %d byte(s)", sizeof(float));
return (0);
}
