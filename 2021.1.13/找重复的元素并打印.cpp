#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[101];
    int visit[101]= {0};
    int i,j,len,flag;
    scanf("%s",s);
    printf("Output:\n");
        len = strlen(s);//len�ַ����ĳ���
        for(i=0; i<101; i++)
        {
            visit[i]=0;//��ʼ��
        }
        for(i=0; i<len; i++)
        {
            if(visit[i]==0)//û�з��ʹ�
            {
                flag=0;//flag=1��ʾ���滹�и��ַ����Ҳ��ǵ�һ������
                for(j=i+1; j<len; j++)//����������ַ�
                {
                    if(s[i]==s[j])
                    {
                        if(flag==1)
                        {
                            printf(",%c:%d",s[j],j);
                            visit[j]=1;
                        }
                        else
                        {
                            printf("%c:%d,%c:%d",s[i],i,s[j],j);//���������һ����ͬ�ַ�
                            visit[i]=1;
                            visit[j]=1;
                            flag=1;
                        }
                    }
                }
                if(flag==1)     printf("\n");//���ظ��ַ��Ĳ�Ҫ��ӡ��û�еĲ���ӡ
            }
        }
    
    return 0;
} 
