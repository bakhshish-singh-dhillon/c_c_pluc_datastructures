#include<stdio.h>
#include<conio.h>
main()
{
int i,a,j;
printf("Enter the number for which you want table for ");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
	j=a*i;
printf("\n %d*%d=%d",a,i,j);
}
getch();
}