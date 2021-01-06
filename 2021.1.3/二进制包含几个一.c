#include<stdio.h>
int main(void)
{
	int i,a,b,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		int k=0,c;
		while(a>0)
		{
			c=a%2;
			if(c==1)
			k++;
			a=a/2;
		}
		printf("%d\n",k);
		
	}
}
