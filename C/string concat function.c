#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char ch[40], ch1[20];
	printf("Enter first string\n");
	gets(ch);
	printf("Enter first string\n");
	gets(ch1);
	strcat(ch,ch1);
	printf("\n Final string is %s",ch);
	getch();
}
