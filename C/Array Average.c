#include<stdio.h>
#include<conio.h>
main()
{
	int num, i, sum, a[50];
	float avg;
	printf("Enter the number of subjects: ");
	scanf("%d",&num);
	printf("Enter marks for %d subjects: ",num);
	sum=0;
	for(i=0;i<num;i++)
	{
    scanf("%d",&a[i]);
	sum=sum+a[i];
	}
	printf("%d",sum);
	avg=(float)sum/num;
	printf("\nThe sim is %d and the  average is %d",sum,avg);
	getch();	
}