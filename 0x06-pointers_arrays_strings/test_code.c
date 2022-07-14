#include <stdio.h>

int main(void)
{
	int arr[] = [1,2,3,4,7];
	int i;
	int j;
	int n;
	n = 5;

	for (i = n-1,j = 0; j < n ; i--,j++)
	{
		arr[j] = arr[i];
	}
	printf("%ls",arr);
	
  
	
}