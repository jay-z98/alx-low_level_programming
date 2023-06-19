#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Prints alphabets in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
