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
        len = strlen(s);//len字符串的长度
        for(i=0; i<101; i++)
        {
            visit[i]=0;//初始化
        }
        for(i=0; i<len; i++)
        {
            if(visit[i]==0)//没有访问过
            {
                flag=0;//flag=1表示后面还有该字符并且不是第一个遇到
                for(j=i+1; j<len; j++)//遍历后面的字符
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
                            printf("%c:%d,%c:%d",s[i],i,s[j],j);//遇到后面第一个相同字符
                            visit[i]=1;
                            visit[j]=1;
                            flag=1;
                        }
                    }
                }
                if(flag==1)     printf("\n");//有重复字符的才要打印，没有的不打印
            }
        }
    
    return 0;
} 
