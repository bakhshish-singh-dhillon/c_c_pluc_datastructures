#include<stdio.h>
#include<conio.h>
main()
{
    int i,num,sum;
	printf("Enter the number to find sum of series: ");
	scanf("%d",&num);
	sum=0;
	for(i=num;i>0;i--)
	{
		sum=sum+i;
	}  	
	printf("The sum of seires is %d",sum);
	getch();
}