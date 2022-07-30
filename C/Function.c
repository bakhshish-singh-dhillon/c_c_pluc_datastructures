#include<stdio.h>
#include<conio.h>
main()
{
	int fact,ans,i;
	ans=1;
	printf("Enter the number to find factorial");
	scanf(" %d",&fact);
    for(i=fact;i>=0;i--)
    {
    ans=ans*i;
    }
    printf("The factorial of %d is %d",fact,ans);
    getch();
}