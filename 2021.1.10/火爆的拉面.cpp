#include <stdio.h>

int main() 
{
        int n, l, k, y, i, mini, t;
        char s[101];
		printf("���������ڶ��������:\n");
		scanf("%d", &n);
		printf("���������ʱ��:\n");
		scanf("%d", &l);
		printf("���������ʱ��:\n");
		scanf("%d", &k);
		printf("���ϵ�����ʱ��:\n");
		scanf("%d",&y);
        while ((n&&l&&k&&y) != EOF)
		{
                mini = 1000000000;
                while (n--) 
				{
					printf("��%d�Ե��������:\n",n+1);
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
				printf("�����Ϸ����Ǹ�������Ŷ�ʱ��:");
                printf("%d\n", mini);
				break;
        }
        return 0;
}
