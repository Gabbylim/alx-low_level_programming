#include <stdio.h>
#include <ctype.h>

int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
while (x != 'e')
{
putchar(x);
}
}
}
