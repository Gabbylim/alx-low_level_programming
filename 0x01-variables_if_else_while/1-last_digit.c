#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'simple number checker'
 *
 * Return: Always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d", n);
if (n > 5)
{
printf(" is %d and is greater than 5\n", (rand() - RAND_MAX / 2));
}
else if (n == 0)
{
printf(" is %d and is 0\n", n);
}
else if (n < 6 && n != 0)
{
printf(" is %d and is less than 6 and not 0\n", n);
}
else
{
printf("repeat");
}
return (0); }
