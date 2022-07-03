#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: 'hexadeci'
 *
 * Return: Always a zero
 */

int main(void)
{
char x;
int y;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
for (y = 'a'; y < 'g'; y++)
{
putchar(y);
}
putchar('\n');
return (0); }
