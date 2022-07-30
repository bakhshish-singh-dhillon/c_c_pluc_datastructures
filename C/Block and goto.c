#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
char ch;
sum:
printf("Enter the two numbers you want to add ");
scanf("%d %d",&a,&b);
c=a+b;
printf("The sum of %d and %d is %d",a,b,c);
fflush(stdin);
printf("\nDo you want to continue adding numbers? Y/N ");
scanf("%c",&ch);
if(ch=='y'||ch=='Y')
{
	goto sum;
}
getch();
}