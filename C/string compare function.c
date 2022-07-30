#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char ch1[20], ch2[20];
	int i;
	printf("Enter first strings: ");
	gets(ch1);
	printf("Enter second strings: ");
	gets(ch2);
	i=strcmp(ch1,ch2);
	if(i==0)
	{
		printf("Strings are equal");
	}
	else
	{
		printf("Strings are not equal");
	}
	getch();
}
