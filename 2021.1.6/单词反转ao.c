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
C: ���ʷ�ת
����

�Ӽ�������һ���ַ�����û�б����ţ�����֮���Կո�ָ�������������е�ÿһ������



����

һ�в��������ŵ��ַ���������С��256

 

���

��ÿ��������������

 

����


����	���
I love SCU	I evol UCS
*/
