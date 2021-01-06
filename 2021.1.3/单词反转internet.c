#include<stdio.h>
#include<string.h>
void reverse(char s[])
{
	char temp;
	int low,high,length,i=0;
	length=strlen(s);
	
	while(i<length)
	{	
		while(s[i]==' ' && i<length)				
		{
			i++;=
		}
		low=i;
	
		while(s[i]!=' ' && i<length)	
		{
			i++;	
		}
		high=i-1;
			
		while(low < high)				
		{							
			temp=s[low];							
			s[low]=s[high];							
			s[high]=temp;							
			low++;							
			high--;
		}
	}
}

void main()
{
	char x[100];
	printf("Input:\n");
	gets(x);
	reverse(x);
	printf("Output:\n");
	printf("%s\n",x);
}

