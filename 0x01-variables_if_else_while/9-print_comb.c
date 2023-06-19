#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Prints possible combinations of single-digit,
 * numbers in ascending order,
 * separating them by ", ".
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(num + '0');

if (num != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
