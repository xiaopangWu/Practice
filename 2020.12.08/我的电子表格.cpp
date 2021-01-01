#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int r,c,i,j,p;
	int table[r+1][c+1];
	scanf("%d %d",&r,&c);
	getchar(); 
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&table[i][j]);
			getchar();
		}
	}
	int n,x1,x2,y1,y2,x,y;
	char temp[1][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%s",temp[0]);
	    if(strcmp(temp[0],"SR")==0)
	   	{
	   		scanf("%d %d",&x1,&x2);
	   		int temp1[1][c]; 
	   		memcpy(temp1[0],table[x1-1],sizeof(int)*1*c);
	   		memcpy(table[x1-1],table[x2-1],sizeof(int)*1*c);
	   		memcpy(table[x2-1],temp1[0],sizeof(int)*1*c);
		}
		if(strcmp(temp[0],"SC")==0)
		{
			scanf("%d %d",&y1,&y2);
			int temp2[1][c]; 
	   		for(j=0;j<r;j++)
			  { 
			  	temp2[0][0] = table[j][y1-1];
			  	table[j][y1-1]=	table[j][y2-1];
			    table[j][y2-1] = temp2[0][0];
			   } 
	    }
		if(strcmp(temp[0],"DR")==0)
	    {
	    	scanf("%d",&x);
	    	for(j=x-1;j<r-1;j++)
	    	{
	    		memcpy(table[j],table[j+1],sizeof(int)*c);
			}
			r-=1;
		}
		if(strcmp(temp[0],"DC")==0) 
		{
			scanf("%d",&y);
			for(j=0;j<r;j++)
			{
				for(p=y-1;p<c-1;p++)
				{
				table[j][p]=table[j][p+1];
				}
			}
			c-=1;
		}	
		if(strcmp(temp[0],"IR")==0)
		{
			scanf("%d",&x);
			r+=1;
			for(j=r-1;j>x-1;j--)
	    	{
	    		memcpy(table[j],table[j-1],sizeof(int)*c);
			}
			
			for(p=0;p<c;p++)
			{
				table[x-1][p]=0;
			}
		}
		if(strcmp(temp[0],"IC")==0) 
		{
			scanf("%d",&y);
			for(p=0;p<r;p++)
			{
				for(j=c-1;j>y-1;j--)
				{
					table[p][j]=table[p][j-1];
				}
			}
			c+=1;
			for(p=0;p<r;p++)
			{
				table[y-1][p]=0;
			}
		}
    }
    for(i=0;i<r;i++)
	{
	 	for(j=0;j<c;j++)
	 	{
	 		printf("%d ",table[i][j]);
		}
		printf("\n");
	}
	return 0;
}
