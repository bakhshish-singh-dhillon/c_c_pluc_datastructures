#include<stdio.h>
#include<conio.h>
int multi(int a, int b);
main()
{
	int a,b,p;
	printf("Enter a and b ");
	scanf("%d %d",&a,&b);
	p=multi (a,b);
	printf("The sum is %d",p);
	getch();
}
int multi(int a, int b)
{
	int d;
	d=a*b;
	return d;
}
