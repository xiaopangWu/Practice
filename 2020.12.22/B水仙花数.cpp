#include<stdio.h>
int main()
{
	int t,i;
	int r[1000]={0};
	int y=0;
	int x=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int m,n,j,a,b,c;
		if(m<n||m>=100||n<=999)
		{
		    scanf("%d %d",&m,&n);
			for(j=m;j<=n;j++)
			{
				a=j/100;//百位 
				b=(j-a*100)/10;//十位 
				c=j%10;//个位 
			    if(j==a*a*a+b*b*b+c*c*c)
				{
					
				    y++;
				    r[x]=j;
					x++;
				} 
			}
			if(y==0)
			{
				printf("-1\n");
			}	
			else
			{
				for(j=0;j<y;j++)
				{
				printf("%d ",r[j]);
				}
				printf("\n");
			}
		}
		
	}
	return 0;
}
