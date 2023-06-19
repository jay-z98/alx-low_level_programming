#include <stdio.h>

/**
 * main - Print Upper and Lower case alphabets
 *
 * Prints alphabets in lowercase, followed by uppercase,
 * and then a new with the putchar function.
 *
 * Return: Always 0 (indicating success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}
