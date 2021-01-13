#include<stdio.h>
int main()
{
	int a[3]={9,6,5};
	int *p;
	p=&a[0];
	printf("%d\n",(*p)++);
	printf("%d\n",*p++);
	printf("%d\n",*(p++));
	return 0;
 } 
