#include "main.h"
/**
 *  print_most_numbers - print except 2 and 4
 * Description: using _putchar
 * Return: 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
int x;

for (x = 0; x < 10; x++)
{
if (x != 2 && x != 4)
{
_putchar(x + '0');
}
}}
