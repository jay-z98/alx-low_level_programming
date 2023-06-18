#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Determines if a generated number is possitive,
 * negative, or zero.
 *
 * Return: Always 0 (uccess)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}


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
