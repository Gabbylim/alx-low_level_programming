#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*only for headers */

/* this is main */
int main(void)
/*this mainly entails the ifs */
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*my source code */
if (n > 0)
{
printf("is positive\n");
}
else if (n < 0)
{
printf("is negative\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else
{
printf("no value seen");
}
return (0); }


