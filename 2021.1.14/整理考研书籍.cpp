 #include <stdio.h>
#include <string.h>

char name[100][51];

int LIS(int n) 
{
        int i, pre, ft, la, m;
        for (i = pre = 0; i < n; i++) 
		{
                ft = 0;
                la = pre - 1;
                while (ft <= la) 
				{
                        m = (ft + la) >> 1;
                        if (strcmp(name[m], name[i]) > 0)
                                la = m - 1;
                        else
                                ft = m + 1;
                }
                strcpy(name[ft], name[i]);
                if (ft == pre)
                        pre++;
        }
        return pre;
}

int main() 
{
        int n, m, i, j, sum;
        char s[51], *p;
		printf("Please input N and M:\n");
		scanf("%d%d%*c", &n, &m);
        while ( (m&&n)!= EOF) 
		{
                sum = 0;
				printf("Please input the names:\n");
                while (n--)
				{
                        for (i = 0; i < m; i++) 
						{
                                name[i][0] = '\0';
                                gets(s);
                                p = strtok(s, " ");
                                while (p) 
								{
                                        strcat(name[i], p);
                                        p = strtok(NULL, " ");
                                }
                                for (j = 0; name[i][j] != '\0'; j++) 
								{
                                        if (name[i][j] >= 'A' && name[i][j] <= 'Z')
                                                name[i][j] += 32;
                                }
                        }
                        sum += m - LIS(m);
                }
				printf("Output:\n");
                printf("%d\n", sum);
				break;
        }
        return 0;
}
