 #include<stdio.h>

int main()
{
    int a,b,k,t,i;
	printf("Please input a and b:");
    scanf("%d %d",&a,&b);
	if(a>1000||a<=0||b>1000||b<=0)
	{
		printf("Output:\nInput error!\n");
		return 0;
	}
	else
	{
    if(a<b)
    {
            k=a;
            a=b;
            b=k;
    }
    t=a*b;
    while(b!=0)
    {
            i=a%b;
            a=b;
            b=i;
    }
	printf("Output:");
    printf("%d\n",t/a);
    return 0;}
