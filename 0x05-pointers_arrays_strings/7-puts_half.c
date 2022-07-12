#include "main.h"

/**
 * puts_half - prints 2nd half of the string
 * @str: character pointer
 * Return: 0
 */

void puts_half(char *str)
{
int n;
int x;
int y;

for (x = 0; str[x] != '\0'; x++)
{
;
}
n = x;
if (x % 2 == 0)
{
for (y = 0; y <= n ; y++)
{
if (y >= n / 2)
{
_putchar(str[y]);
}
}
}
else if (x % 2 != 0)
{

for (y = 0; y <= n; y++)
{
if (y > ((n - 1) / 2))
{
_putchar(str[y]);
}
}
}
}
