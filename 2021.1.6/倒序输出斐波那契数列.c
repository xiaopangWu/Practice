#include<stdio.h>
int main(void)
{
	int n,i;
	int a[100];
	scanf("%d",&n);
	a[0]=a[1]=1;
	for(i=2;i<n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	
	if(n<=2)
	{
		for(i=0;i<n;i++)
		{
			printf("1 ");
		}
	}
	else
	{
		for(i=n-1;i>=0;i--)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
