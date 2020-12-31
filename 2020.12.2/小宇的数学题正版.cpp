#include<stdio.h>
int main()
{
    int a[5];int i;

    while(scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]) != EOF)
        {
		if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0) break;
        	//µÈ²î 
            if(a[1]-a[0]==a[2]-a[1]&&a[2]-a[1]==a[3]-a[2]&&a[3]-a[2]==a[4]-a[3])
            {
				printf("case one\n");
				int log=a[4];
				for(i=0;i<=4;i++)
				{
					log=log+(a[4]-a[3]);
					printf("%d",log);
				if (i<4)printf(" ");
				else if (i = 4)printf("\n"); 
				}
			
				
            }
            if(a[1]*a[1]==a[0]*a[2]&&a[2]*a[2]==a[1]*a[3]&&a[3]*a[3]==a[2]*a[4])
            {
				printf("case two\n");
				int temp=a[4];
                for(int i=0;i<=4;i++)
				{
			            temp=temp*(a[1]/a[0]);
				    printf("%d",temp);	
				if (i<4)printf(" ");
				else if (i = 4)printf("\n");
				}   
			    
            }
            if(a[2]==a[0]+a[1]&&a[3]==a[2]+a[1]&&a[4]==a[3]+a[2])
            {
				printf("case three\n");
				int back=a[4];
				int front=a[3];
                for(int i=0;i<=4;i++)
                {
				    back=back+front;
				    front=back-front;
				    printf("%d",back);
				if (i<4)printf(" ");
				else if (i = 4)printf("\n"); 
                }
	        }
		
		}
	        return 0;
}
