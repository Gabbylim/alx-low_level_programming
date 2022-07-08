#include "main.h"
/**
 * print_square - prints square of characters
 * @size: square size
 */

void print_square(int size)
{
int x, y;
x = 0;

if (size < 1)
{
y = 0;
}

while (x < size)
{
for (y = 0; y < size; y++)
{
_putchar('#');
}
_putchar('\n');
x++;
}}
