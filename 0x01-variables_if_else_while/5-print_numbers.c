#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints out single-digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int number;

for (number = 0; number < 10; number++)
{
putchar(number + '0');
}

putchar('\n');

return (0);
}
