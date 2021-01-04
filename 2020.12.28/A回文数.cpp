#include<stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	getchar();
    for(i=0;i<n;i++)
    {
    	int t,m,k;
    	scanf("%d",&t);
    	if(t>0)
    	{
		    k=t;
    	    m=0;
    	    while(k>0)
    	    {
    		    m=m*10+k%10;
    		    k=k/10;
		    }
		    if(m==t)
		    {
			    printf("yes\n");
		    }
    	    else
    	    {
    		    printf("no\n");
		    }
		}
		else
		{
			printf("no\n");
		}
    	
	}return 0;
}
