#include<stdio.h>
int main(void)
{
	int a[100];
	int i,n,b,c=0;
	scanf("%d",&n);
	getchar();
	{
		for(i=1;i<=n;i++)
		
		{
			getchar();
			scanf("%[^\n]]",a);
			for(b=0;a[b]!='\0';b++)
			{
				if((a[b]>='0'&&a[b]<='9')||a[b]==','||a[b]=='\n')
				c++;
				else
				 c=0;
			}
			if(c==0)
			printf("no\n");
			else
			printf("yes\n");
		}
	}
	return 0;
}



/*
A: IP地址判断
描述

 

合法的IP地址是这样的形式：

   A.B.C.D

其中A、B、C、D均为位于[0, 255]中的整数。为了简单起见，我们规定这四个整数中不会有前导零存在，如001这种情况。请编写程序判断IP地址的合法性。

 

输入

 

第1行是一个整数n，表示随后有n组数据。每组数据占一行，为一个待判断合法性的IP地址。

 

输出

 

对每组数据，如果是合法的IP地址，输出“yes”，否则输出“no”

 

样例

 

输入

输出

2

202.115.32.24

yes

a.b.c.d

no     */

