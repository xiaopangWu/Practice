#include<stdio.h>
int age_n(int n,int a,int k)
{
		return(n == 1 ? a : age_n(n - 1,a,k) + k);
}
int main()
{
	int n, a, k;
	scanf("%d %d %d", &n, &a, &k);
	if (a<=0||k<=0||k>100||n<2)
		printf("Wrong Number");
	else
		printf("%d",age_n(n,a,k));
	return 0;
}
