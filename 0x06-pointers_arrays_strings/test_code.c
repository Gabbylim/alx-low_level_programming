#include <stdio.h>

char *_strcat(char *dest,char *src)
{
	int i,c;

	for (i = 0; dest[i] != '\0';i++)
	{
	;
	}

	for (c = 0; src[c] != '\0';c++)
	{
	dest[i] = src[c];
	i++;
	}
	return (dest);
}
int main(void)
{
	char s1[98] = "hello ";
	char s2[] = "world";
	char *ptr;
	ptr = _strcat(s1,s2);

	printf("%s",ptr);

}