#include "main.h"
#include <stdio.h>

/**
 * main - check code
 * Return: 0
 */

int main(void)
{
char c;

c = '5';

printf("%c: %d\n",c,_isdigit(c));
return (0);
}