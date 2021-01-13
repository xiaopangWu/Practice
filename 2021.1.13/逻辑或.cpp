#include<stdio.h>
int main()
{
	char a[][5]={"ABCD","1234","BOMB"};
	printf("%s,%c",*a,*a[2]);
	return 0;
 } 
