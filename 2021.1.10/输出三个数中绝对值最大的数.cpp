#include <stdio.h>
#include <math.h>

int main(void)
{
	int number1, number2, number3, max;

	printf("Input 3 numbers: ");
	scanf("%d,%d,%d", &number1, &number2, &number3);
	if (abs(number1) > abs(number2))
	{
		max = number1;
	}
	else
	{
		max = number2;
	}
	if (abs(max) < abs(number3))
	{
		max = number3;
	}
	printf("Output:\nThe number with maximum absolute value is %d.\n", max);
	return 0;
}
