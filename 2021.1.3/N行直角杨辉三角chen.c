#include <stdio.h>
int main(void){
	int m,n,q,a[100],b[100];
	scanf("%d",&n);
	if(n<=0||n>20){
		printf("Input Error");
		return 0;
	}
	printf("1,\n");
	if(n>=2){
		printf("1,1,\n");
		a[0]=a[1]=1;
		for(m=3;m<=n;m++){
			printf("%d,",a[0]);
			for(q=1;q<m-1;q++){
				b[q]=a[q-1]+a[q];
				printf("%d,",b[q]);
			}
			for(q=1;q<=m-1;q++){
				a[q]=b[q];
			}
			a[m-1]=1;
			printf("%d,\n",a[m-1]);
		}
	}
}
/*
C: N 行直角杨辉三角
描述 

输入一个不大于 20 的正整数 n，输出 n 行直角杨辉三角。 

（提示：直角杨辉三角的每一行的第一个数和最后一个数均为 1，其余数字均为其正上方与左上方数字之和） 

 

输入 

一个不大于 20 的正整数。 

 

输出 

当输入不符合题意时，输出 Input Error；否则输出输出 n 行直角杨辉三角。 

（注意：每行输出的数字，用英文格式下的逗号两两相隔） 

 

样例 1 

输入                                             输出 

1                                                   1,



样例 2 

输入                                             输出 

4                                                   1,

                                                     1,1,

                                                     1,2,1,

                                                     1,3,3,1,

 

*/
