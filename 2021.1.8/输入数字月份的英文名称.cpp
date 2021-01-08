int main() {
        char *months[] = {"January", "February", "March",
                "April", "May", "June", "July", "August", "September",
                "October", "November", "December"};
        int month;
		printf("Please input a month number:\n");
        scanf("%d", &month);
		if((month<1)||(month>12))
		{printf("Output:\nInput Error!\n");}
		else
		{
        printf("Output:\nThis month's English name is %s.\n", *(months + month - 1));
		}
        return 0;
}
