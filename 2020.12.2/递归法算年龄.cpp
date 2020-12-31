//µİ¹é·¨ËãÄêÁä
#include<stdio.h>
int age(int n,int a,int k)
{
	if(n==1)
	return a;	
	else
	return k+age(n-1,a,k);
}
int main()
{
	int n,a,k;
	scanf("%d%d%d",&n,&a,&k);
	if(n>0&&k<=100&&n>=2)
	{
	printf("%d",age(n,a,k));	
	} 
	else
	printf("Wrong Number");
	return 0;
}


 
