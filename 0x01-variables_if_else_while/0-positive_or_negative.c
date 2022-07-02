#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*only for headers */

/**
 * main - Entry point
 *
 * Description: 'this program deals with if else'
 *
 * Return: Always 0 (Success)
 */
int main(void)
/*this mainly entails the ifs */
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*my source code */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("no value seen");
}
return (0); }


