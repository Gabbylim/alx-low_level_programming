#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: playing with putchar
 *
 * Return: its alway zero
 */

int main(void)
{
int x;
for (x = 0; x < 9; x++)
{
putchar(x + '0');
putchar(',');
putchar(' ');
}
putchar('9');
return (0);
}
