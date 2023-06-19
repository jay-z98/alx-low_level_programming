#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Prints out single digit numbers of the base 10 starting from 0,
 * followed by a new with two putchar calls.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int d;

for (d = 0; d <= 9; d++)
putchar('0' + d);

putchar('\n');

return (0);
}
