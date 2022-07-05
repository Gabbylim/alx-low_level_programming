#include "main.h"
/**
 * main - Entry point
 *
 * Description: works like a putchar but from a different library
 *
 * Return: Always zero when in success
 */

int main(void)
{
int x;
char str[9] = "_putchar";

for (x = 0; x <= 9; x++)
{
_putchar(str[x]);
}
_putchar('\n');
return (0); }
