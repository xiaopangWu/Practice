 #include <stdio.h>

int main() 
{
        int n, i;
        double x[100], y[100], r[100], a, b;
		printf("请输入WIFI热点的个数n:\n");
		scanf("%d", &n);
        while (n!= EOF, n) 
		{
			printf("请输入x,y,r:\n");
                for (i = 0; i < n; i++)
                        scanf("%lf%lf%lf", &x[i], &y[i], &r[i]);
				printf("请输入a,b:\n");
                scanf("%lf%lf", &a, &b);
                for (i = 0; i < n; i++) 
				{
                        if ((a - x[i]) * (a - x[i]) + (b - y[i]) * (b - y[i]) <= r[i]
                                        * r[i])
                                break;
                }
				printf("Output:\n");
                puts(i < n ? "YES" : "NO");
				break;
        }
        return 0;
}
