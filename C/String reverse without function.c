#include<stdio.h>
#include<conio.h>
main()
{
	char ch[20];
	int i, j;
	printf("Enter a string: ");
	gets(ch);
	j=0;
	printf("Reverse of string is: ");
	while(ch[j]!='\0')
	{
		j++;
	}
	for(i=j-1;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
	getch();
}
