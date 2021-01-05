#include<stdio.h> 
int main(void) 
{
	int n,i;
	for(n=1;n<=9;n++)
	{
		for(i=1;i<=n;i++)
		printf("%d*%d=%d ",n,i,n*i);
		printf("\n");
		
		
		
	}
	return 0;
}
