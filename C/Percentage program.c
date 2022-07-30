#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,per;
	printf("enter first number ");
	scanf ("%d",&a);
	printf("enter secomd number ");
	scanf ("%d",&b);
	printf("enter third number ");
	scanf ("%d",&c);
	per=(a+b+c)*100/300;
	printf("The Percentage is %d",per);
	getch();
}