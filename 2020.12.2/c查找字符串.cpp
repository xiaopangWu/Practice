#include<stdio.h>
int main()
{
	int n,x;
	char word[10][99]={'\0'};
	if(0<n<10)
	{
	   scanf("%d",&n);
	} 
	getchar();
	for(int i=0;i<n;i++)
	{
		scanf("%s",&word[i]);
	}
	for(int i=0;i<n;i++)
	{
		x=0;
		while(word[i][x]=='A')
		    {
			x=x+1;
			}
		if(word[i][x]=='S'&&word[i][x+1]=='C'&&word[i][x+2]=='U')
		    {
			    x=x+3;
		    }
		else
		    {
			    printf("NO\n");
			    continue;
		    }
	    while(word[i][x]=='A')
	       {
	    	x=x+1;
		   }
	    if(word[i][x]==0)
	    	{
	    		printf("YES\n");
			}
		else
			{
				printf("NO\n");
				continue;
			}
	}
	return 0;
} 
