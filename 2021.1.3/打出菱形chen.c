#include <stdio.h>
int main()
{
	int n,a,i,q=1,p;
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("error");
		return 0;
	}
	printf("print\n");
	for(i=1;i<n;i++)
	{
		a=(n-q)/2;
		if(i%2==1)
		{
			for(p=1;p<=a;p++)
			{
				printf(" ");
			}
			for(q=1;q<=i;q++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	while(i>=1)
	{
		a=(n-i)/2;
		if(i%2==1)
		{
			for(p=1;p<=a;p++)
			{
				printf(" ");
			}
			for(q=1;q<=i;q++)
			{
				printf("*");
			}
			printf("\n");
		}
		i--;
		
	}
}

