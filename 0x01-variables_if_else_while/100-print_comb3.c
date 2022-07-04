#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the advances'
 *
 * Return: Always a zero
 */
int main(void)
{
int x;
int y;

for (x = 0; x < 9; x++)
{
for (y = 0; y < 10; y++)
{
if (x != y && x != 8 && y != 9)
{
putchar(x + '0');
putchar(y + '0');
putchar(',');
putchar(' ');
}
}
}
return (0);
}

