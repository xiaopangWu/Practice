#include <stdio.h>
void main()
{
	int i, x, money;
	double rate;
	double array[5] = {3.15, 3.63, 4.02, 4.69, 5.36};
	printf("Input:\nPlease input benjin,cunqi:\n");
	scanf("%d,%d", &money, &x);
	if(money<0)
	{
		printf("\nOutput:\nThe Money is Invalid!\n");
		return;
	}
    i = x;
	if (x == 5)
	{
		i = 4;
	}
	else if (x == 8)
	{
		i = 5;
	}
	rate = money * array[i - 1] * x / 100;
	printf("\nOutput:\nlixi = %.2f yuan!\n", rate);
} 
