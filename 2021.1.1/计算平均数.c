#include<stdio.h> 
int main(void)
{
	int i ,n;
	int a[100];
	int sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	float average;
	average=(float)sum/i;
	printf("%.2f",average);  

	return 0;
	

}
