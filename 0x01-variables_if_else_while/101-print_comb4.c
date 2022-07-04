#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: '3 combinations of digit with putchar'
 *
 * Return: Always a zero
 */
int main(void)
{
int x;
int y;
int z;

for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
for (z = 0; z < 10; z++)
{
if (x != y && x != z && y != z)
{
putchar(x + '0');
putchar(y + '0');
putchar(z + '0');
putchar(',');
putchar(' ');
}
}
}
}
return (0); }
