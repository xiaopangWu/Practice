#include<stdio.h>
int main()
{
	int n,a,b,c,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a>0&&b>0&&c>0)
		{
			if(a+b>c||a+c>b||b+c>a)
		    {
		        if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
		        {
			        printf("Yes\n"); 
		        } 
		        else
		        {
			        printf("No\n");
		        }
		    }
		    else
		    {
			    printf("No\n");
		    }
		} 
		else
		{
			printf("No\n");
		} 		
	}
	return 0;
} 
