#include<stdio.h>
#include<conio.h>
main()
{
	char ch[20];
	int i;
	printf("Enter a string: ");
	gets(ch);
	i=0;
	while(ch[i]!='\0')
	{
		i++;
	}
	printf("Length of string is %d",i);
	getch();
}
