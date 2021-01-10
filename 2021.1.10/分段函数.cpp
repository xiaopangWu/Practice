 #include <stdio.h>

int main(void)
{
	int x;
	double y;

	printf("Please input x:");
	scanf("%d", &x);
	if (x < 0)
	{
		y = -5.0* x + 27;
	}
	else if (x == 0)
	{
		y = 7909;
	}
	else
	{
		y = 2.0 * x - 1;
	}
	printf("Output:\n");
	printf("F(%d) = %.0f\n", x, y);

	return 0;
} 
