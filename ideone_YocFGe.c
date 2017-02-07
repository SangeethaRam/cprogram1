#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("\n %d",sum);
	return 0;
}
