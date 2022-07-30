#include<stdio.h>
#include<conio.h>
main()
{
int i=1,a,j;
printf("Enter the number for which you want table for ");
scanf("%d",&a);
while(i<=10)
{
	j=a*i;
printf("\n %d*%d=%d",a,i,j);
i++;
}
getch();
}