#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char ch[20];
	int i;
	printf("Enter a string: ");
	gets(ch);
	i=strlen(ch);
	printf("Length of string is %d",i);
	getch();
}
