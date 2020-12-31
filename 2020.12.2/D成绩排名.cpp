#include<stdio.h>
#include<string.h>
int turn(char grade[])
{
   int len=strlen(grade), temp=0;
   if(grade[0]=='n')
   {
   	return -1;
	}
    
		for(int i=0;i<len;i++)
		{
			temp=grade[i]-'0'+temp*10;
		}
		
	return temp;
}
int main()
{
	int t,max,min,x,y;
	char name[1000][100]={'\0'},num[1000][100]={'\0'},other[100];
	int score[100]={0};
	scanf("%d",&t); 
	getchar();
	for(int i=0;i<t;i++)
	{
		scanf("%s %s %s",name[i],num[i],other);
		score[i]=turn(other);
	}
	max=min=score[0];
	x=y=0;
	for(int i=0;i<t;i++)
	{
		if(score[i]==-1)
		{continue;
		}
		if(max<score[i])
		{
			max=score[i];
			x=i;
		}
		if(max==score[i])
		{
			int k=0;
			while(k<10)
			{
				if(name[x][k]>name[i][k])
				{
					max=score[i];
					x=i;
					break;
				}
				k=k+1;
			}
		}
		if(min>score[i])
		{
			min=score[i];
			y=i;
		}
		if(min==score[i])
		{
			int k=0;
			while(k<10)
			{
				if(name[i][k]>name[y][k])
				{
					min=score[i];
					y=i;
					break;
				}
				k=k+1;
			}
		}
	}
	printf("%s %s\n",name[x],num[x]);
	printf("%s %s\n",name[y],num[y]);
	return 0;
 }

 
