#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n number of array
 * @a: pinter to the array
 * @n: number of array to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
int i;

i = 0;
for (n--; n >= 0; n--, i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
