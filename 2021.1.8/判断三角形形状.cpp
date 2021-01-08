int main()
{
        int t,a,b,c;
		
		printf("Please input a,b,c: ");
		scanf("%d%d%d",&a,&b,&c);
		printf("Output:\n");
		if(a+b>c && a+c>b && b+c>a)
		{
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
				printf("good\n");
			else if(a==b||a==c||b==c)
				 printf("perfect\n");
			else
				printf("just a triangle\n");
		}
		else
			printf("Input error!\n");
	
		return 0;
}¡¢ 
