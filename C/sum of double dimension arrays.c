#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, a[2][2],b[2][2], sum[2][2];
	printf("Enter values of first matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
		getch();
	}
	printf("Enter values of second matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum of two matrices is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}	
	getch();	
}