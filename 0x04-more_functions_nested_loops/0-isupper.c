#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a character is an uppercase letter.
 * @c: character to check.
 *
 * Return: 1 if c is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

/**
 * main - entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
