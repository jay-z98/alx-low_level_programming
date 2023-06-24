#include "main.h"
/**
 * print_triangle - prints a triangle using the character '#'
 * @size: size of the triangle
 *
 * Description: This function takes an integer `size` and prints a triangle
 * of that size using the character '#'. If `size` is 0 or negative, it
 * prints a new line.
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
