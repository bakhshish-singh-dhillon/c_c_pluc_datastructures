#include<stdio.h>
#include<conio.h>
void main()
{
	int i, arr[25], s=0;
	float avg;
	printf("Enter 25 numbers");
	for(i=0;i<25;i++)
	{
		scanf("%d",&arr[i]);
		s=s+arr[i];			
	}
	avg=(float)s/25;
	printf("The average is %f",avg);
	getch();
}