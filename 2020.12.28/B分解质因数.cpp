/*将一个正整数分解质因数。例如：输入90,打印出90=233*5。
1.程序分析：用短除法求解。
对n进行分解质因数，应先找到一个最小的质数i，然后按下述步骤完成：
(1)如果这个质数恰等于n，则说明分解质因数的过程已经结束，n本身就是质数，打印出n即可。
(2)如果n!=i，但n能被i整除，则应打印出i的值，并用n除以i的商,作为新的正整数n,重复执行第一步。
(3)如果n不能被i整除，则用i+1作为i的值,重复执行第一步。*/

#include <stdio.h>
 
int is(int i){
	int ret=1;
	int j ;
	for(j=2; j<i; j++){
		if(i%j == 0){
			ret = 0;
			break;
		}
	}
	return ret;
}//判断i是否是素数 
 
int main(){
	int t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		int x;//记录读入的数
	    int n=1;
	    int i;
	    scanf("%d",&x);
	    printf("",x);
	    if(is(x)){
		    printf("%d\n",x);
	    }
	    else{
		    while(x != 1){
			    for(i=2 ; i<=x ; i++){
			        if(is(i) && x%i == 0){
					    printf("%d",i);
					    if(i != x ){
						    printf("*");
						}
					x = x/i;
					i = 1; 
				}
			}
		printf("\n");
		}
	 }
	}
	
	return 0;
}
