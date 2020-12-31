#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, input;
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&input);
		if(input <= 1){
			printf("Input Error\n");
			setbuf(stdin,NULL);
		}
		else if(input > 546) printf("Overflow\n");
		else 
		{ 
			for(int j = 1;j <= input;j++){
				int l;
				for(l = 2;l <= j;l++){
					if (j % l == 0) break;
				}
				if (l == j) printf("%d,",j);
			}
			printf("\n"); 
		}
	}
	return 0;
}
