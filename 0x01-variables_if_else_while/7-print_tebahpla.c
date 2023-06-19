#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Prints lowercase alphabets reversed, followed by a new line,
 * using putchar function.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}

putchar('\n');

return (0);
}
