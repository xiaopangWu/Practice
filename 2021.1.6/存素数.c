#include<stdio.h>//����m�����ݣ�����һ��������n����n����Ҫ��ʱ�����С�ڵ���n ֮ǰ���������� 
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
