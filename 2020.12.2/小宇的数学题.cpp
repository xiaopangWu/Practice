#include<stdio.h>
int main()
{
	while(1)
	{
	int a[15];
	int log=0;
	for(int i=0;i<=4;i++)
	{
	scanf("%d",&a[i]);
	if(0==a[i])
	 {
	   log=log+1;
	 }
	}
	if(5==log)
	{
	break;
	}
	if(a[1]-a[0]==a[2]-a[1]&&a[2]-a[1]==a[3]-a[2]&&a[3]-a[2]==a[4]-a[3])
	{
		printf("case one\n");
		for(int i=0;i<=4;i++)
		{
			printf("%d ",a[4]+(i+1)*(a[4]-a[3]));
		 } 
	    printf("\n");
	    continue;
	}
	if(a[1]*a[1]==a[0]*a[2]&&a[2]*a[2]==a[1]*a[3]&&a[3]*a[3]==a[2]*a[4]&&a[4]*a[4]==a[3]*a[5])
	{
		printf("case two\n");
		int temp=a[4],mlu=a[4]/a[3];
		for(int i=0;i<=4;i++)
		{
			printf("%d ",temp=temp*mlu);
		}
		printf("\n");
		continue;
	 } 
	if(a[1]+a[0]==a[2]&&a[3]+a[2]==a[4]&&a[1]+a[2]==a[3])
	{
		printf("case three\n");
		int front=a[3];
		int back=a[4];
		for(int i=0;i<=4;i++){
			printf("%d ",back);
			back=back+front;
			front=back-front;
		} 
		printf("\n");
		continue;
	}
}
	return 0;
}
	

	
