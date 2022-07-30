#include<stdio.h>
#include<conio.h>
int factorila (int)
main()
{
	int fact,ans,i;
	printf("Enter the number to find factorial ");
	scanf(" %d",&fact);
    ans=factorial(fact);
    printf("The factorial of %d is %d",fact,ans);
    getch();
}
int factorial (n)
{
	int m;
	if (n==1)
	{
		return(n);
	}
	else
	{
	m=n*factorial(n-1);
	return(m)	
	}
}