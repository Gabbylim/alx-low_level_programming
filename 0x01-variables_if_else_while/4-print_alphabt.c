#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: 'the for loop with if'
 *
 * Return: 'Always a zero'
 */
int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'e' && x != 'q')
{
putchar(x);
}
}
putchar('\n');
return (0); }
