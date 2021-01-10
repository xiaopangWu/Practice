#include <stdio.h>

int main() 
{
        int n, l, k, y, i, mini, t;
        char s[101];
		printf("请输入现在队伍的列数:\n");
		scanf("%d", &n);
		printf("拉面的制作时间:\n");
		scanf("%d", &l);
		printf("烤肉的制作时间:\n");
		scanf("%d", &k);
		printf("饮料的制作时间:\n");
		scanf("%d",&y);
        while ((n&&l&&k&&y) != EOF)
		{
                mini = 1000000000;
                while (n--) 
				{
					printf("第%d对的排列情况:\n",n+1);
                        scanf("%s", s);
                        for (t = i = 0; s[i]; i++) 
						{
                                if (s[i] == 'A'||s[i] == 'a')
                                        t += l + k + y;
                                else if (s[i] == 'B'||s[i] == 'b')
                                        t += l * 2 + k;
                                else
                                        t += l * 3 + k * 3 + y * 2;
                        }
                        if (t < mini)
                                mini = t;
                }
				printf("\nOutput:\n");
				printf("最快吃上饭的那个队伍的排队时间:");
                printf("%d\n", mini);
				break;
        }
        return 0;
}
