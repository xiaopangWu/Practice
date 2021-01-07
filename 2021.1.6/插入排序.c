#include<stdio.h> 
void order(int a[],int n,int x);
int main(void)
{
	int i,n;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		order(a,i,a[i]);
		int j;
		for(j=0;j<=i;j++)
		{
			printf("%d ",a[j]);
		}
		printf("\n");
	}
	
	return 0;
	
		
	}
	
	



void  order (int a[],int n,int x)
{
	int i;
	for(i=n-1;i>=0;i--)
	{
		if(x<a[i])
		{
			a[i+1]=a[i];
			a[i]=x;
			
		}
		else
		{
			break;
		}
	}
}
