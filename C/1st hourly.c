#include <stdio.h>
#include <conio.h>
main()
{
	int first_num;
	int second_num;
	printf("Enter Frist Number ");
	scanf("%d",&first_num);
	printf("Enter Second Number ");
	scanf("%d",&second_num);
	if(first_num>second_num)
	{
	printf ("First number is greater then second number");
	}
	else if (first_num==second_num)
	{
	printf ("Second number is eqaul to First number");
	}
	else
	{
	printf("Second number is greater then first number");
	}
	getch();
}

