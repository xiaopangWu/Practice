#include<stdio.h>
int main()
{
	int score;
	char grade;
	printf("Please input a score: ");
	scanf("%d",&score);
	printf("Output:\n");
	if(score>100 || score<0)
	{
		printf("Input error!\n");
		return 0;
	}
	grade=score>=90?'A':(score>=60?'B':'C');
	printf("%d belongs to %c\n",score,grade);
	return 0;
} 
