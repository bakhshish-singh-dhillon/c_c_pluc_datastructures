#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char original[20], dupli[20];
	printf("Enter first string\n");
	gets(original);
	printf("Enter first string\n");
	gets(dupli);
	strcpy(dupli,original);
	printf("Copied string is %s",dupli);
	getch();
}
