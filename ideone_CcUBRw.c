#include <stdio.h>

int main(void) {
	// your code goes here
	int n,sum=0,i;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n sum of %d is %d",n,sum);
	return 0;
}
