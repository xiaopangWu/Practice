#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n, max, min, x, y;

	char name[1000][20] = { '\0' };
	char num[1000][19] = { '\0' };
	char grade[4] = { '\0' };
	int score[1000] = { 0 };
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		int len = 0;
		while ((name[i][len++] = getchar()) != ' ');
		len = 0;
		while ((num[i][len++] = getchar()) != ' ');
		grade[0] = getchar();
		if (grade[0] == 'n')
		{
			while(getchar()!='\n'); 
			score[i] = -1;
		}
		else
		{
			len = 1;
			while ((grade[len++] = getchar()) != '\n');
			len--;
			int number = 0;
			for (int k = 0; k < len; k++)
			{
				number += (grade[k] - '0') * pow(10, len - k - 1);
			}
			score[i] = number;
		}
		printf("%s %s %d", name[i], num[i], score[i]);
	}
	max = min = score[0];
	x = y = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < score[i])
		{
			int k = 0;
			while (k < 20)
			{
				if ((name[x][k] > name[i][k]))
				{
					max = score[i];
					x = i;
					break;
				}
				k++;
			}

		}
		if (min > score[i])
		{
			int k = 0;
			while (k < 20)
			{
				if (name[x][k] > name[i][k])
				{
					min = score[i];
					y = i;
					break;
				}
				k++;
			}

		}
	}
	printf("%s %s\n", name[x], num[x]);
	printf("%s %s\n", name[y], num[y]);
	return 0;
}
