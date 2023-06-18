#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to the variable n and
 * prints the last digit of n along with a corresponding message.
 *
 * Return: Always 0 (meaning succes)
 */
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is %d and is", n, n % 10);

lastDigit = n % 10;

if (lastDigit > 5)
{
printf(" greater than 5\n");
}
else if (lastDigit == 0)
{
printf(" 0\n");
}
else
{
printf(" less than 6 and not 0\n");
}
return (0);
}
