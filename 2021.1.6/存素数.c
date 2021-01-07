#include<stdio.h>//输入m组数据，输入一个正整数n，但n符合要求时，输出小于等于n 之前的所有质数 
int main(void)
{

	int m,n,i,t=0,j,a;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
	
		scanf("%d",&n);
		if(n>=542)
		printf("Overflow\n");
		else if(n<=1)
		printf("Input Error\n");
		
		else
		{
			for(a=2;a<=n;a++)
			{
				for(j=a-1;j>1;j--)
				{
					if(a%j==0)  
				{
				t++;
				break;	
			   	}
				 }
			   	if(t==0)
			   	
				   printf("%d,",a);
				   
				   
			   	else
			   	t=0;
			   	
			}
			printf("\n"); 
		}
	}
	return 0;
}
