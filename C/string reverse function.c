#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char ch[20];
	printf("Enter a string: ");
	gets(ch);
	strrev(ch);
	printf("Reverse of string is %s",ch);
	getch();
}

