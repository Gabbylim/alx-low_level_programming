#include "main.h"

/**
 * puts2 - prints any other number in the array
 * @str: pointer to the array
 * Return: 0
 */

void puts2(char *str)
{
int x;

for (x = 0; str[x] != '\0'; x++)
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
}
_putchar('\n');
}
