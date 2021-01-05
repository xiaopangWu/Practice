#include<stdio.h>
int main(void)
{
 int i,n;
 int number_5=0,number_2=0;
 for(i=1;i<=100;i++)	
	{
	 	int a,b;
	 
	 	a=i;
	 while(a>0)
	 	{
	 		b=a	%5;
			 if(b==0)
			{
			  number_5++;
			  a=a/5;
			}
			else
			break;
			
		}
		
	  while(a>0)
	   {
	  		int m;
	  		m=a%2;
	  		if(m==0)
	  		{
	  		  number_2++;
			  a=a/2;	
			}
			else
			break;
	   }
	}
	
	if(number_2>number_5)
	printf("%d",number_5);
	else
	printf("%d",number_2);
	return 0;
} 
