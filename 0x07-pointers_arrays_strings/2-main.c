#include "main.h"
#include <stdio.h>

int main(void)
{
char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    } else { printf("nothing");}

    return (0);
}
