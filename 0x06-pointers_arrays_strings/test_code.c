#include <stdio.h>

int main(void)
{
	char s1[98] = "hellothere";
	char s2[] = "sure";
	int i, c,n;
	c = 0;
	n = 2;

	for (i = 0;s1[i] !='\0';i++)
	{
		;
	}
    n = i;
	for (c = 0;c < n && s2[c] != '\0';c++)
	 {
	 	 i++;
		 s1[i] = s2[c];
		
	}
    printf("%s\n",s1);
	

	
}