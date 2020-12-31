#include<stdio.h>
int main(){
   struct student{
    char name[99];
    char num[20];
    int grade;
    };
   int a,i;
   struct student max,min,temp;
   max.grade=0;
   min.grade=1000;
   if(scanf("%d",&a)!=0)
   {
        for(i;i<a;++i)
		{
        if(scanf("%s %s %d",temp.name, temp.num, &temp.grade)!=EOF)
		{
            if(temp.grade>max.grade) max=temp;
            if(temp.grade<min.grade) min=temp;
        }
    else{
            return 0;
        }
        }
    printf("%s %s\n",max.name, max.num);
    printf("%s %s\n",min.name, min.num); }
    return 0;
}
