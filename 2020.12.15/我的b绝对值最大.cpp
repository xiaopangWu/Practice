#include<stdio.h>
int main()
{
	int m,i,j,b,max;
	scanf("%d",&m);
	if(1<=m<=20)
	{
	    for(i=0;i<m;i++)
	    {
		    int a[m]={0};
		    scanf("%d",&a[i]);
			if(a[i]<0)
		    {
			    b=a[i];
			    a[i]=-a[i];
		    }
		   for(j=0;j<m;j++)
		{
			max=0;
			if(a[j]>max)
			{
				max=a[j];
			}
			if(a[j]==max)
			{
				max=a[j];
			}	
		}
		printf("")
	    }	
	} 
	return 0;
}
