#include<stdio.h>
 int main()
 {
 	int height,length,width,volume,weight;
 	printf("��������ӵĸߣ�");
 	scanf("%d",&height);
    printf("��������ӵĳ���");
	scanf("%d",&length);
	printf("��������ӵĿ�");
	scanf("%d",&width);
	volume=length*height*width;
	weight=(volume+165) / 166;	
 	printf("Volume (cubic inches):%d\n",volume);
 	printf("Dimensional weight (pounds):%d\n",weight);
 	
 	return 0;
 }
