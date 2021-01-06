#include<stdio.h>
void sort (int a[],int n);
int main(void)
{
	int i,j,n,m;
	int k=0;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);	
		}
		sort(a,m);
		if(m==1)
		printf("ERROR\n");
		else
		{
			for(i=0;i<m-1;i++)
			{
				if(a[i]==a[i+1])
				k=k;
				else
				k++;
			}
			if(k==0)
			printf("ERROR\n");
			else
			{
				for(i=0;i<m-1;i++)
				{
					if(a[i]!=a[i+1])
					break;
				}
				printf("%d\n",a[i+1]);
			}
		}
	}
	return 0;
}

void sort(int a[],int n)
{
	int i,j;
	int min;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				min=a[j+1];
				a[j+1]=a[j] ;
				a[j]=min;
			}
			
		}
	}
}
