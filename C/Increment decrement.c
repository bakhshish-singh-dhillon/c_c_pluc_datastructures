#include<stdio.h>
#include<conio.h>
main()
{
	int a=10;
	a++; //11
	printf("%d\n",++a); //12
	printf("%d\n",--a); //11
	printf("%d\n",a--); //11
	printf("%d\n",a); //10
	getch();
}