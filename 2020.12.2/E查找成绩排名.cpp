#include<stdio.h>
#include <string.h>
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
	int t,i;
	char name[1000][100]={'\0'},num[1000][100]={'\0'},other[100]={'\0'},result[20]={'\0'};
	int score[100]={0};
	scanf("%d %s",&t,result); 
	getchar();
	for(int i=0;i<t;i++)
	{
		scanf("%s %s %s",name[i],num[i],other);
		score[i]=turn(other);
	}
	for(i=0;i<t;i++)
	{
	int k=strncmp_m(name[i][100],result,20);
	int q=strncmp_m(num[i][100],result,20);
	int 
	}
	    
return 0;
}
