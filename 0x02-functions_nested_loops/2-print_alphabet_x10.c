#include "main.h"
/**
 * print_alphabet_x10 - the printer
 *
 * Description: 'prints 10x'
 *
 * Return: 'always void'
 * On error it returns -1.
 */

void print_alphabet_x10(void)
{
int i = 0;
int j;
while (i < 10)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
i++;
}
}
