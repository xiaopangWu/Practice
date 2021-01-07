#include<stdio.h> 
int main(void) 
{
	char a[256];
	int i;
	while(1)
	{
		for(i=0;;i++)
		{
			a[i]=getchar();
			if(a[i]=='\n')
			{
				for(--i;i>=0;i--)
				{
					printf("%c",a[i]);
				}
					goto out;
				
			}
			
			if(a[i]==' ')
			{
				for(--i;i>=0;i--)
				{
					printf("%c",a[i]);
				}
				printf(" ") ;
				
			}
		}
	}
	out:return 0;
}





/*
C: 单词反转
描述

从键盘输入一行字符串，没有标点符号，单词之间以空格分隔，逆序输出其中的每一个单词



输入

一行不带标点符号的字符串，长度小于256

 

输出

将每个单词逆序后输出

 

样例


输入	输出
I love SCU	I evol UCS
*/
