#include<stdio.h>
 int main()
 {
 	int height,length,width,volume,weight;
 	printf("请输入盒子的高：");
 	scanf("%d",&height);
    printf("请输入盒子的长：");
	scanf("%d",&length);
	printf("请输入盒子的宽：");
	scanf("%d",&width);
	volume=length*height*width;
	weight=(volume+165) / 166;	
 	printf("Volume (cubic inches):%d\n",volume);
 	printf("Dimensional weight (pounds):%d\n",weight);
 	
 	return 0;
 }
