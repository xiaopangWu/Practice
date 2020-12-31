#include<stdio.h>
//int fibon(int n)
//{
//	return ((n == 1 || n == 2)?1:fibon(n - 1) + fibon(n - 2));
//}
int main()
{
	int n, fibon_arr[45+1];
	scanf("%d",&n);
//	for (int i = 0 ; i < n ; i++){
//		fibon_arr[i] = fibon(i+1);
//	}
	fibon_arr[1] = 1;
	fibon_arr[2] = 1; 
	int a = 1, b = 1;
	int c;
	for(int i = 3;i <= n;i++){  
    	c = a + b;
    	fibon_arr[i]=c;
    	a = b;
    	b = c;
    }
	for (int l = n ; l > 0 ; l--){
		printf("%d ",fibon_arr[l]);
	}
	return 0;
}
