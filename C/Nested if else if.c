#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
printf("Enter the value of a,b,c ");
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
     if(a>c)
     {
     	printf("%d is the greatest number",a);
     }
     else
     {
     	printf("%d is the greatest",c);
     }
}
else
{
	if(b>c)
	{
		printf("%d is the greatest",b);
	}
	else
	{
	     printf("%d is the greatest",c);	
	}
}
getch();
}